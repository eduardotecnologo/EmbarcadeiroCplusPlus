//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MUltDevice.h"
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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   int x;
   x = 10;

   int y;
   y = 20;

   ShowMessage(IntToStr(x));
   ShowMessage(IntToStr(y));
}
//---------------------------------------------------------------------------
