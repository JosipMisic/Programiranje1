//Omoguciti korisniku unos dimenzija matrice(2-D polja) m x n, gdje su 10 <= m < 19 i 11 <= n <= 20. 
//Popuniti matricu pseudo - slucajnim brojevima iz[10, 20] iz R.
//Odrediti najvecu vrijednost u svakom stupcu i izracunati njihov zbroj te ga potom ispisati na ekran.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DG 10
#define GG 20

int main() {
	srand((unsigned)time(NULL));
	int m, n;
	float A[19][20];
	do {
		printf("Unesi dimenzije matrice: \n");
		scanf("%d %d", &m, &n);
	} while ((m < 10 || m >= 19) || (n < 11 || n>20));
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			A[i][j] = DG + (float)rand() / RAND_MAX * (GG - DG + 1);
		}
	}
	float max_stup;
	for (i = 0; i < n; i++) {
		max_stup = A[0][j];
		for (j = 0; j < n; i++) {
			if (A[i][j] > max_stup) {
				max_stup = A[i][j];
			}
		}
	}


	return 0;
}



//Omoguciti korisniku unos dimenzije matrice(2 - D polja) m x n, gdje je 10 <= m < 51 i 15 <= n <= 30. 
//Popuniti matricu pseudo - slucajnim brojevima iz[1000, 1000]/[100, 100] iz R(vrijednosti iz[100, 100] nisu dozvoljene).
//Pronaci redak koji ima najmanju aritmeticku sredinu kvadrata brojeva koji ga cine.Prepisati sve retke pronadenim(retkom).
//Na kraju, na ekran ispisati matricu tako da ispis odrazava pravokutni oblik matrice.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DG -1000
#define GG 1000

int main() {
	srand((unsigned)time(NULL));
	int m, n;
	float A[51][30];
	do {
		printf("Unesi dimenzije matrice: \n");
		scanf("%d %d", &m, &n);
	} while ((m < 10 || m >= 51) || (n < 15 || n>30));
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			A[i][j] = DG + (float)rand() / RAND_MAX * (GG - DG + 1);
		}while (A[i][j] >= -100 && A[i][j] <= 100);
	}
	return 0;
}