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

#ifndef DYNARRAY_H_
#define DYNARRAY_H_

int dynArrayInt(int** pTab, int number);
int dynArrayFloat(float** pTab, int number);
int dynArrayDouble(double** pTab, int number);
int dynArrayChar(unsigned char** pTab, int number);

#endif /* DYNARRAY_H_ */
