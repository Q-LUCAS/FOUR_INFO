//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "IHMfour.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	 volt=2;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnTempClick(TObject *Sender)
{
switch(ListTemp->Text.ToInt())
{
	 case 0:
	 LEFOUR->Ecriture(0);
	 break;

	 case 25:
	 LEFOUR->Ecriture(2.5);
	 break;

	 case 50:
	 LEFOUR->Ecriture(5);
	 break;

	 case 75:
	 LEFOUR->Ecriture(7.5);
	 break;

	 case 100:
	 LEFOUR->Ecriture(10);
     break;
	 }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
temp=LEFOUR->Lecture();
LblTemp->Caption=temp;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BtnInitisialisationClick(TObject *Sender)
{
LEFOUR = new four();
Timer1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
	temp=LEFOUR->Lecture();



	LEFOUR->Ecriture(volt);


	if(temp-2>tempcom)
	{
		volt=0;
	}
	if(temp<tempcom)
	{
		volt+=0.2;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BtnStartClick(TObject *Sender)
{
tempcom=EdtTemp->Text.ToInt();
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BtnArretClick(TObject *Sender)
{
LEFOUR->Ecriture(0);
volt = 2 ;
}
//---------------------------------------------------------------------------











