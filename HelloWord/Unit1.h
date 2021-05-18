//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFrmMensagem : public TForm
{
__published:	// IDE-managed Components
	TEdit *EditMensagem;
	TButton *Btn_Enviar;
	TButton *BtnCancel;
	TButton *BtnFechar;
	void __fastcall Btn_EnviarClick(TObject *Sender);
	void __fastcall BtnCancelClick(TObject *Sender);
	void __fastcall BtnFecharClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmMensagem(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmMensagem *FrmMensagem;
//---------------------------------------------------------------------------
#endif
