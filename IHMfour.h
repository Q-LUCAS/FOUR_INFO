//---------------------------------------------------------------------------

#ifndef IHMfourH
#define IHMfourH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "four.h"
#include <Vcl.ExtCtrls.hpp>
#include <string>

using namespace std;
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TLabel *Label1;
	TLabel *LblTemp;
	TLabel *LblCommande;
	TButton *BtnTemp;
	TComboBox *ListTemp;
	TTimer *Timer1;
	TButton *BtnInitisialisation;
	TTimer *Timer2;
	TEdit *EdtTemp;
	TLabel *LblCommandeTemp;
	TButton *BtnStart;
	TButton *BtnStop;
	TButton *BtnArret;
	void __fastcall BtnTempClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall BtnInitisialisationClick(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall BtnStartClick(TObject *Sender);
	void __fastcall BtnArretClick(TObject *Sender);


private:
four *LEFOUR;
float volt;
int temp, tempcom;

public:		// D�clarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
