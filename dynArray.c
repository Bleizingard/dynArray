/*
 *   dynArray.c
 *
 *   Created on: 16 déc. 2016
 *   Author: PIERRE Jonathan
 *
 *   Bibliothéque ayant pour but de créer des tableaux de manières dynamiques
 *
 *   dynArray - Librairy for create dynamics arrays in C
 *   Copyright (C) 2016 - PIERRE Jonathan
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Comment utiliser ?
 * Appeler la fonction appropriée, passer en premier argument l'adresse d'un pointeur du type du tableau retourné.
 * En second argument la taille du tableau
 *
 * Valeur retour :
 * La valeur retourner est un booléen (1 si la création du tableau est un succès sinon 0)
 *
 * Le pointeur sera modifié directement.
 */

//Création d'un tableau d'integer
int dynArrayInt(int** pTab, int number)
{

	*pTab = malloc(number * sizeof(int));

	if(pTab)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//Création d'un tableau de float
int dynArrayFloat(float** pTab, int number)
{
	*pTab = malloc(number * sizeof(float));

		if(pTab)
		{
			return 1;
		}
		else
		{
			return 0;
		}
}

//Création d'un tableau de double
int dynArrayDouble(double** pTab, int number)
{
	*pTab = malloc(number * sizeof(double));

	if(pTab)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//Création d'un tableau de caratères
int dynArrayChar(unsigned char** pTab, int number)
{
	*pTab = malloc((number+1) * sizeof(unsigned char));

	if(pTab)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
