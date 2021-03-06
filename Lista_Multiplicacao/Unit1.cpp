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
void __fastcall TForm1::BtnSairClick(TObject *Sender)
{
     Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnCalcularClick(TObject *Sender)
{
	int num = StrToInt(EditNumero->Text);
    ListBoxResult->Items->Clear();

	for(int i = 0; i <= 10; i++ ){
		ListBoxResult->Items->Add(IntToStr(num) + " * " + i + " = " + IntToStr(num*i));
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnLimparClick(TObject *Sender)
{
    EditNumero->Text = "";
	ListBoxResult->Items->Clear();
    EditNumero->SetFocus();
}
//---------------------------------------------------------------------------
