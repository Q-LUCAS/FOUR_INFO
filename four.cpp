//---------------------------------------------------------------------------

#pragma hdrstop

#include "four.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

four::four()
{
		IDCard=Register_Card(PCI_9111DG,0);     // On initie la carte

		AO_9111_Config(IDCard,P9111_AO_UNIPOLAR);  // On paramètre notre sortie

		AO_VWriteChannel(IDCard,1,0);       // On envoie 0v sur la sortie

		AI_9111_Config(IDCard,TRIG_INT_PACER,P9111_TRGMOD_SOFT,0); // on configure notre entrée

}

four::~four()
{
		Release_Card(IDCard);

}

int four::Lecture()
{
		double tension;
		AI_VReadChannel(IDCard,1, AD_B_10_V, &tension);    // lecture sur le port 1
		return (51*tension)-73;

}

void four::Ecriture(float tension)
{
		AO_VWriteChannel(IDCard,0,tension);
}

