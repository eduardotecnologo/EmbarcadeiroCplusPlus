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
//---------------------------------------------------------------------------
class TFormPrincipal : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TBitBtn *btnCliente;
	TfrxReport *frxReportClient;
	TfrxDBDataset *frxDBDatasetClient;
	void __fastcall btnClienteClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPrincipal *FormPrincipal;
//---------------------------------------------------------------------------
#endif
