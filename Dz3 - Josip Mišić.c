////Omogućiti korisniku unos n(3 ≤ n ≤ 20) vrijednosti elemenata u polje realnih brojeva.
////Potom odrediti i na ekran ispisati koliko je vrijednosti veće od srednje vrijednosti svih elemenata.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	int i;
	int z = 0;
	float polje[20];
	float arit_sredina = 0;
	printf("Unesite velicinu polja: ");
	do {
		scanf("%d", &n);
	} while (!(n >= 3 && n <= 20));
	for (i = 0; i < n; i++) {
		scanf("%f", &polje[i]);
		arit_sredina += polje[i];
	}
	arit_sredina /= n;
	for (i = 0; i < n; i++) {
		if (polje[i] > arit_sredina) {
			z++;
		}
	}
	printf("\n%d vrijednosti je vece od srednje vrijednosti svih elemenata", z);

	return 0;
}


//Omogućiti korisniku unos m(5 < m ≤ 15) vrijednosti elemenata u polje cijelih brojeva.
//Odrediti aritmetičku sredinu svih elemenata na parnim indeksima i ispisati ju na ekran.


int main() {
	int n;
	int i;
	int polje[15];
	float arit_sredina = 0;
	printf("Unesite velicinu polja: ");
	do {
		scanf("%d", &n);
	} while (!(n >= 5 && n <= 15));
	for (i = 0; i < n; i++) {
		scanf("%d", &polje[i]);
		if (polje[i] % 2 == 0) {
			arit_sredina += polje[i];
		}
	}
	arit_sredina /= n;
	printf("\nAritmeticka sredina svih elemenata na parnim indeksima je: %f", arit_sredina);

	return 0;
}