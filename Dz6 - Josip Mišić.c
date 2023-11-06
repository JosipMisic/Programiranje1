//Omoguæiti korisniku unos elemenata matrice A dimenzija 2 x 4. 
//Potom, na ekran ispisati transponiranu matricu(AT)i, j = (A)j, i

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int A[2][4];
	int i, j;
	printf("Unesi matricu 2x4: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	/*printanje matrice*/
	printf("\nUnesena matrica:");
	printf("\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	/*transponirana matrica*/
	printf("\nTransponirana matrica:");
	printf("\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\t", A[j][i]);
		}
		printf("\n");
	}
	return 0;
}