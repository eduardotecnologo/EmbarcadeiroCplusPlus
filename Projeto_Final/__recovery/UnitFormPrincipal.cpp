//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFormPrincipal.h"
#include "UnitCliente.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TFormPrincipal *FormPrincipal;
//---------------------------------------------------------------------------
__fastcall TFormPrincipal::TFormPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormPrincipal::btnClienteClick(TObject *Sender)
{
	 TFormCliente * FormCliente = new TFormCliente(Owner);
	 FormCliente->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::btReportsClick(TObject *Sender)
{

}
//---------------------------------------------------------------------------

