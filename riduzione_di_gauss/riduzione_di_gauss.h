#ifndef __RIDUZIONE_DI_GAUSS_H__
#define __RIDUZIONE_DI_GAUSS_H__

void richiediMatrice(int m, int n, float matrice[m][n]);
void mostraMatrice(int m, int n, float matrice[m][n], int tab, int startN, int startM);
void metodoDiGauss(int m, int n, float matrice[m][n], int startM, int startN);
void trovaPivot(int m, int n, float matrice[m][n], int pivot[m][2], int startM, int startN);
void ordinaMatricePerPivot(int m, int n, float matrice[m][n], int pivot[m][2]);

#endif