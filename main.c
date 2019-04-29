#define MAX_NOM 200

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "types.c"


void NettoyerLaChaine (char *);

void CreerStructure (char [MAX_NOM], Transition **, Place **);
void GenererBlocF (Transition *TransitionsRdP,Place *PlacesRdP, char LeFichierEnVHDL[MAX_NOM]);
void GenererLog (Place *, Transition * , char [MAX_NOM]);
void GenererPlaces (Place *, char  LeFichierEnVHDL[MAX_NOM]); 
void GenererBlocG (Place *, char  LeFichierBlocG[MAX_NOM]);
void GenererBlocM (Place *, char  LeFichierBlocM[MAX_NOM]);


int main(void)
{
Transition * TransitionsRdP=NULL; 
Place      * PlacesRdP=NULL;


char LeFichierTINA[MAX_NOM]   = "etiquette.ndr";
char LeFichierLog[MAX_NOM]    = "etiquette.log";
char LeFichierEnVHDL[MAX_NOM]    = "DescriptionTransitions.vhd";
char LeFichierPlaces[MAX_NOM] = "LesPlaces.c";
char LeFichierBlocG[MAX_NOM]  = "CalculDesSorties.txt";
char LeFichierBlocM[MAX_NOM]  = "BlocM.txt";


printf ("nom du fichier a Mouliner :");
scanf ("%s",LeFichierTINA);
strcpy(LeFichierLog,LeFichierTINA);
strcat(LeFichierTINA, ".ndr");
strcat(LeFichierLog,".log");


// ouverture du fichier issus de tina

CreerStructure (LeFichierTINA, &TransitionsRdP, &PlacesRdP);
 
 
GenererLog (PlacesRdP, TransitionsRdP, LeFichierLog);
GenererPlaces (PlacesRdP, LeFichierPlaces);
GenererBlocF (TransitionsRdP,PlacesRdP,LeFichierEnVHDL);
//GenererBlocM (PlacesRdP, LeFichierBlocM);
//GenererBlocG (PlacesRdP, LeFichierBlocG);

return 1;              
}   
    
