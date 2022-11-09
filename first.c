#include <stdio.h>
#include <stdlib.h>  //Dirctives de préprocesseur
#include <stdbool.h>

int main()           // Fonction
{
	/*
    int nobmreDevies = 5, niveau = 1 ;

    printf ("Vous avez %d vies et vous etes au niveau N° %d \n" ,nobmreDevies,niveau);
    */
    /*
Signés
	char >> "?"
	signed char >> "1 octel" "-128 à 127"
	short "2 octel" >> "-32 768 à 32 767"
	int "2 octel / 4 octel" >> "-32 768 / -2 147 483 648 à 32 767 / 2 147 483 647"
	long "4 octel" >> "-2 147 483 648 à 2 147 483 647"
	long long "8 octel" >> "-9 223 372 036 854 775 808 à 9 223 372 036 854 775 807"
	float "4 octel" >> "-3,4.1038 à 3,4.1038"
	double "8 octel" >> "-1,7.10308 à 1,7.10308"
	long double "10 octel" >> "-1,1.104932 à 1,1.104932"

Non Signés
	unsigned char "1 octel" >> "0 à 255"
	unsigned short "2 octel" >> "0 à 65 535"
	unsigned int "2 octel / 4 octel" >> "0 à 65 635 / 4 294 967 295"
	unsigned long "4 octel" >> "0 à 4 294 967 295"
	unsigned long long "8 octel" "0 à 18 446 744 073 709 551 615"
	*/
	/*
    int userAge = 0; //On initialise la variable à 0
    printf ("Quel age avez-vous ?\n");
    scanf ("%d",&userAge); //On demande d'entrer l'age avec scanf
    printf("Ah ! Vous avez donc %d ans !\n",userAge);
    */
    /*
    int nombre = 2;
	nombre += 4; // nombre vaut 6...
	printf ("%d\n" , nombre);
	nombre -= 3; // ... nombre vaut maintenant 3
	printf ("%d\n" , nombre);
	nombre *= 5; // ... nombre vaut 15
	printf ("%d\n" , nombre);
	nombre /= 3; // ... nombre vaut 5
	printf ("%d\n" , nombre);
	nombre %= 3; // ... nombre vaut 2 (car 5 = 1 * 3 + 2)
	printf ("%d\n" , nombre);
	*/
	int pomme ;
	float prix , Total ;
	printf("\t Programme qui calcule le Total\n");
	printf ("Combien de pomme a tu vendu\n");
	scanf ("%d" , &pomme);
	printf ("Combien est le prix de la pomme\n");
	scanf ("%f" ,&prix );
	Total = pomme * prix ;
	printf ("%.2f"  " DA\n",Total);

	return 0;
}