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

