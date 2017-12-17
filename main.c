/*
- * main.c
 *
 *  Created on: 16 déc. 2016
 *      Author: bleizingard
 */
#include <stdio.h>
#include <stdlib.h>
#include "dynArray.h"

/* Fonctions exemple*/

void exInt (int tailleTableau)
{
	int* tableau = 0;
	int i=0;

	dynArrayInt(&tableau, tailleTableau);

	for(i=0; i<tailleTableau; i++)
	{
		printf("Votre nombre %d ? ", i+1);
		scanf("%d", &tableau[i]);
	}


	for(i=0; i<tailleTableau; i++)
	{
		printf("La valeur de la case %d de votre tableau est %d \n ", i+1, tableau[i]);
	}
	free(tableau);

}

void exFloat (int tailleTableau)
{
	float* tableau = 0;
	int i=0;

	dynArrayFloat(&tableau, tailleTableau);

	for(i=0; i<tailleTableau; i++)
	{
		printf("Votre nombre %d ? ", i+1);
		scanf("%f", &tableau[i]);
	}


	for(i=0; i<tailleTableau; i++)
	{
		printf("La valeur de la case %d de votre tableau est %f \n ", i+1, tableau[i]);
	}
	free(tableau);

}

void exDouble (int tailleTableau)
{
	double* tableau = 0;
	int i=0;

	dynArrayDouble(&tableau, tailleTableau);

	for(i=0; i<tailleTableau; i++)
	{
		printf("Votre nombre %d ? ", i+1);
		scanf("%lf", &tableau[i]);
	}


	for(i=0; i<tailleTableau; i++)
	{
		printf("La valeur de la case %d de votre tableau est %lf \n ", i+1, tableau[i]);
	}
	free(tableau);

}

void exChar (int tailleTableau)
{
	unsigned char* tableau = 0;
	unsigned char c;
	int i = 0;

	dynArrayChar(&tableau, tailleTableau);

	printf("Votre chaine de caractères (max %d charactères) ? ", tailleTableau);

	/*Remplacer cette partie par du getchar pour prendre en compte les espaces...*/

	/*scanf("%s", tableau);*/
	while(getchar() != '\n')
		;

	do
	{
		//fflush(stdin);
		c = getchar();
		tableau[i] = c;
		i++;
	}while(c != '\n' && i < tailleTableau);

	printf("Appuyer sur entrer pour continuer...");
	while(getchar() != '\n')
			;
	tableau[i+1] = '\0';

	printf("La chaine de caracrères contient : %s \n ", tableau);

	free(tableau);

}

int main (void)
{
	// vMenu est le choix de l'utilisateur
	int vMenu = -1;
	int tailleTab = 0;

	do
	{
		printf("\n\n%s \n %s \n %s \n %s \n %s \n %s \n",
				"Quel type de tableau voulait vous générer ?",
				"1. Tableau d'entier",
				"2. Tableau de réel (float)",
				"3. Tableau de réel (double précision)",
				"4. Chaine de caractères",
				"0. Quittez");

		scanf("%d", &vMenu);

		if(vMenu >= 1 && vMenu <= 4)
		{
			printf("Quel taille désirez vous pour votre tableau ? ");

			if(!scanf("%d", &tailleTab))
			{
				vMenu = -1;
			}

			//fflush(stdin);
		}

		switch (vMenu)
		{
			case 1:
				exInt(tailleTab);
				break;
			case 2:
				exFloat(tailleTab);
				break;
			case 3:
				exDouble(tailleTab);
				break;
			case 4:
				exChar(tailleTab);
				break;
			case 0:
				//Décision de quittez le programme, ne rien faire.
				break;
			default:
				//On reboucle
				vMenu = -1;
				break;
		}

	} while (vMenu);

	return 0;

}
