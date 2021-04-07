//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitCliente.h"
#include "UnitDM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormCliente *FormCliente;
int situacao; // Situação = 1 (Incluir) Situação = 2 (Alterar)
//---------------------------------------------------------------------------
__fastcall TFormCliente::TFormCliente(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormCliente::FormClose(TObject *Sender, TCloseAction &Action)
{
  Action = TCloseAction::caFree;     //Liberando memória ao fechar o form
}
//---------------------------------------------------------------------------
void __fastcall TFormCliente::btnSairClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormCliente::Hab_botoes(TObject *Sender)
{
	btnIncluir->Enabled = true;
	btnAlterar->Enabled = true;
	btnExcluir->Enabled = true;
	btnCancelar->Enabled = false;
	btnGravar->Enabled = false;
	btnSair->Enabled = true;
}

void __fastcall TFormCliente::Des_botoes(TObject *Sender)
{
	btnIncluir->Enabled = false;
	btnAlterar->Enabled = false;
	btnExcluir->Enabled = false;
	btnCancelar->Enabled = true;
	btnGravar->Enabled = true;
	btnSair->Enabled = false;
}

void __fastcall TFormCliente::Habilitar_campos(bool valor)
{
	EditName->Enabled = valor;
	EditEndereco->Enabled = valor;
	EditCidade->Enabled = valor;
	ComboBoxUF->Enabled = valor;
}

void __fastcall TFormCliente::LimparCampos()
{
	EditId->Text = " ";
	EditName->Text = " ";
	EditEndereco->Text = " ";
	EditCidade->Text = " ";
	ComboBoxUF->ItemIndex = 0;
}
void __fastcall TFormCliente::FormCreate(TObject *Sender)
{
	Page1->ActivePage=(TabArquivo);
}
//---------------------------------------------------------------------------

void __fastcall TFormCliente::FormActivate(TObject *Sender)
{
	Hab_botoes(FormCliente);
}
//---------------------------------------------------------------------------

void __fastcall TFormCliente::btnIncluirClick(TObject *Sender)
{
   TabArquivo->TabVisible = false;
   TabDados->TabVisible = true;
   Page1->ActivePage = (TabDados);
   situacao = 1;
   LimparCampos();
   Habilitar_campos(true);
   Des_botoes(FormCliente);
   EditName->SetFocus();
}

//---------------------------------------------------------------------------

void __fastcall TFormCliente::btnGravarClick(TObject *Sender)
{
   if(Application->MessageBox(L"Confirma a Inclusão ou Alteração deste Cliente?",
				   L"Confirmação", MB_YESNO + MB_ICONINFORMATION)==IDYES)
   {
	 switch(situacao)
	 {
		case 1: // incluir novo Registro
		DM->FDQueryIncluir->Close();
		DM->FDQueryIncluir->ParamByName("NOME")->AsString = EditName->Text;
		DM->FDQueryIncluir->ParamByName("ENDERECO")->AsString = EditEndereco->Text;
		DM->FDQueryIncluir->ParamByName("CIDADE")->AsString = EditCidade->Text;
		DM->FDQueryIncluir->ParamByName("ESTADO")->AsString = ComboBoxUF->Text.Trim();
		DM->FDQueryIncluir->ExecSQL();
		break;

		case 2: // Alteração de Registro
		DM->FDQueryAlterar->Close();
		DM->FDQueryAlterar->ParamByName("ID")->AsInteger = EditId->Text.ToInt();
		DM->FDQueryAlterar->ParamByName("NOME")->AsString = EditName->Text;
		DM->FDQueryAlterar->ParamByName("ENDERECO")->AsString = EditEndereco->Text;
		DM->FDQueryAlterar->ParamByName("CIDADE")->AsString = EditCidade->Text;
		DM->FDQueryAlterar->ParamByName("ESTADO")->AsString = ComboBoxUF->Text.Trim();
		DM->FDQueryAlterar->ExecSQL();
		break;
	 }  // switch

	 TabDados->TabVisible = true;
	 TabArquivo->TabVisible = true;
	 Page1->ActivePage = (TabArquivo);
	 TabArquivo->SetFocus();
	 Hab_botoes(FormCliente);
	 Habilitar_campos(false);
	 situacao = -1;
   }   // if
}
//---------------------------------------------------------------------------

void __fastcall TFormCliente::TabArquivoShow(TObject *Sender)
{
	DM->FDQueryExibir->Close();
	DM->FDQueryExibir->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFormCliente::DBForIntefaces()
{
   EditId->Text = DM->FDQueryExibir->FieldByName("ID")->AsString;
   EditName->Text = DM->FDQueryExibir->FieldByName("NOME")->AsString;
   EditEndereco->Text = DM->FDQueryExibir->FieldByName("ENDERECO")->AsString;
   EditCidade->Text = DM->FDQueryExibir->FieldByName("CIDADE")->AsString;
   ComboBoxUF->Text = DM->FDQueryExibir->FieldByName("ESTADO")->AsString;
}
void __fastcall TFormCliente::DSClientDataChange(TObject *Sender, TField *Field)
{
	DBForIntefaces();
}
//---------------------------------------------------------------------------

void __fastcall TFormCliente::btnAlterarClick(TObject *Sender)
{
	TabArquivo->TabVisible = false;
	TabDados->TabVisible = true;
	Page1->ActivePage = (TabDados);

	situacao = 2;
	Habilitar_campos(true);
	Des_botoes(FormCliente);
    EditName->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFormCliente::btnCancelarClick(TObject *Sender)
{
   TabArquivo->TabVisible = true;
   Page1->ActivePage = (TabArquivo);
   TabArquivo->SetFocus();
   Hab_botoes(FormCliente);
   Habilitar_campos(false);
}
//---------------------------------------------------------------------------

void __fastcall TFormCliente::btnExcluirClick(TObject *Sender)
{
   if(Application->MessageBox(L"Confirma a Exclusão deste cliente?",
							  L"Exclusão", MB_YESNO + MB_ICONINFORMATION)==IDYES)
   {
	  DM->FDQueryExcluir->Close();
	  DM->FDQueryExcluir->ParamByName("ID")->AsInteger = DM->FDQueryExibir->FieldByName("ID")->AsInteger;
	  DM->FDQueryExcluir->ExecSQL();
   } // if

   DM->FDQueryExcluir->Close();
   DM->FDQueryExcluir->Open();

   TabDados->TabVisible = true;
   TabArquivo->TabVisible = true;
   Page1->ActivePage = (TabArquivo);
}
//---------------------------------------------------------------------------

