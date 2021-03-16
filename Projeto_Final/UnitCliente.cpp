//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitCliente.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormCliente *FormCliente;
//---------------------------------------------------------------------------
__fastcall TFormCliente::TFormCliente(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormCliente::FormClose(TObject *Sender, TCloseAction &Action)
{
  Action = TCloseAction::caFree;     //Liberando mem�ria ao fechar o form
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
	EditEndereco->Text = " ";
	EditCidade->Text = " ";
	ComboBoxUF->ItemIndex = 0;
}
