//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TListBox *ListBoxResult;
	TButton *BtnCalcular;
	TButton *BtnLimpar;
	TButton *BtnSair;
	TEdit *EditNumero;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall BtnSairClick(TObject *Sender);
	void __fastcall BtnCalcularClick(TObject *Sender);
	void __fastcall BtnLimparClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
