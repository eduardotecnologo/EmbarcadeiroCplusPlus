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
	int idade = StrToInt(TxtIdade->Text);

	if(idade >= 18){
		if(idade < 60 ){
			ShowMessage("Maior de Idade!");
		}
		else{
			ShowMessage("Idoso!");
		}
	}
	else{
		if(idade < 14){
			ShowMessage("Uma Crian�a!");
		}
		else{
			ShowMessage("Uma(a) Adolecente!");
		}
	}
}
//---------------------------------------------------------------------------
