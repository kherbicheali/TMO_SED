// a rendre global dans le fichier types
#define MAX_NOM 200
#include <stdio.h>   
 
 
 typedef struct  ACTION {
            char Actions[MAX_NOM];  
            struct ACTION * Suivant;
            } Action;
			
    typedef struct  ARC {
            char Place[MAX_NOM]; 
            int  Poids ; 
            struct ARC * Suivant;
            } Arc;
    
    typedef struct TRANSITION{
            char Nom[MAX_NOM];
            int NbPlacesEntree;
            Arc *ArcsEntrants;
            int NbPlacesSortie;
            Arc *ArcsSortants;
            char Actions[MAX_NOM];
            char Predicat[MAX_NOM];
            struct TRANSITION * Suivant;
            } Transition;
            
    typedef struct PLACE{
            char Nom[MAX_NOM];
            int Mo;
            int NbActions;
            Action * Actions;
            struct PLACE * Suivant;
            } Place;


