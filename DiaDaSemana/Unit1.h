//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TBitBtn *BtnVerificar;
	TBitBtn *BtnSair;
	TEdit *EditNumDia;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *EditDiaSemana;
	void __fastcall BtnVerificarClick(TObject *Sender);
	void __fastcall BtnSairClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
