//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnVerificarClick(TObject *Sender)
{
   int dia = StrToInt(EditNumDia->Text);

   switch (dia) {
		case 1:
			EditDiaSemana->Text = "Domingo";
			break;
		case 2:
			EditDiaSemana->Text = "Segunda-Feira";
			break;
		case 3:
			EditDiaSemana->Text = "Ter�a-Feira";
			break;
		case 4:
			EditDiaSemana->Text = "Quarta-Feira";
			break;
		case 5:
			EditDiaSemana->Text = "Quinta-Feira";
			break;
		case 6:
			EditDiaSemana->Text = "Sexta-Feira";
			break;
		case 7:
			EditDiaSemana->Text = "S�bado";
   default:
			EditDiaSemana->Text = "N�o correspnde a um dia v�lido!";
            ;
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnSairClick(TObject *Sender)
{
      Close();
}
//---------------------------------------------------------------------------