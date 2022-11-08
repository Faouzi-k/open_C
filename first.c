#include <stdio.h>
#include <stdlib.h>  //Dirctives de préprocesseur
#include <stdbool.h>

int main()           // Fonction
{
	/*
    int nobmreDevies = 5, niveau = 1 ;

    printf ("Vous avez %d vies et vous etes au niveau N° %d \n" ,nobmreDevies,niveau);
    */

    int userAge = 0; //On initialise la variable à 0
    printf ("Quel age avez-vous ?\n");
    scanf ("%d",&userAge); //On demande d'entrer l'age avec scanf
    printf("Ah ! Vous avez donc %d ans !\n",userAge);
    
    

	return 0;
}