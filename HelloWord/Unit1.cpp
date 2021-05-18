//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmMensagem *FrmMensagem;
//---------------------------------------------------------------------------
__fastcall TFrmMensagem::TFrmMensagem(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmMensagem::Btn_EnviarClick(TObject *Sender)
{
	EditMensagem->Text = "Hello Manolo";
}
//---------------------------------------------------------------------------
void __fastcall TFrmMensagem::BtnCancelClick(TObject *Sender)
{        // Mostrar box message
	ShowMessage(EditMensagem->Text);
}
//---------------------------------------------------------------------------
void __fastcall TFrmMensagem::BtnFecharClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
