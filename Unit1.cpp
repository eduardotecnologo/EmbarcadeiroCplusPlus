//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonConvertClick(TObject *Sender)
{
	int val;
	val = EditInsertText->Text*1;

	TextResult->Text=AnsiString(val-273)+"K";
}
//---------------------------------------------------------------------------
