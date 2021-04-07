//---------------------------------------------------------------------------

#ifndef UnitFormPrincipalH
#define UnitFormPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFormPrincipal : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TBitBtn *btnCliente;
	TfrxReport *frxReportClient;
	TfrxDBDataset *frxDBDatasetClient;
	TBitBtn *btReports;
	TMainMenu *MainMenu1;
	TMenuItem *Cadastro1;
	TMenuItem *Relatrio1;
	TMenuItem *Clientes1;
	TMenuItem *Funcionrios1;
	TMenuItem *Produtos1;
	TMenuItem *Entrada1;
	TMenuItem *Sada1;
	TMenuItem *Clientes2;
	TMenuItem *Fo4rnecedores1;
	TMenuItem *Funcionrios2;
	TMenuItem *Equipamentos1;
	void __fastcall btnClienteClick(TObject *Sender);
	void __fastcall btReportsClick(TObject *Sender);
	void __fastcall Clientes1Click(TObject *Sender);
	void __fastcall Clientes2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPrincipal *FormPrincipal;
//---------------------------------------------------------------------------
#endif
