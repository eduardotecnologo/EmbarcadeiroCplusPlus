//---------------------------------------------------------------------------

#ifndef UnitClienteH
#define UnitClienteH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFormCliente : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TBitBtn *btnIncluir;
	TBitBtn *btnAlterar;
	TBitBtn *btnExcluir;
	TBitBtn *btnCancelar;
	TBitBtn *btnGravar;
	TBitBtn *btnSair;
	TPageControl *Page1;
	TTabSheet *TabArquivo;
	TTabSheet *TabDados;
	TDBGrid *DBGrid1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *EditCidade;
	TEdit *EditEndereco;
	TEdit *EditId;
	TEdit *EditName;
	TLabel *Label5;
	TComboBox *ComboBoxUF;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnSairClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormCliente(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormCliente *FormCliente;
//---------------------------------------------------------------------------
#endif