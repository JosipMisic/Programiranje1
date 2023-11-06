//Napisati funkciju koja za dani cijeli broj n vraća njegov faktorijel.
//U svrhu testiranja u main - u omogućiti korisniku unos vrijednosti i ispisati povratnu vrijednost funkcije.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fakt(int n) {
	unsigned long int produkt = 1;
	int i;
	for (i = 1; i <= n; i++) {
		produkt *= i;
	}
	return produkt;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("Faktorijel unesenog broja je: %ld", fakt(n));
	return 0;
}


//Napisati funkciju koja računa i vraća
//f(x)=n−1 X i = 2 xi−1 + x2 i −x3 i + 1 i−1, x = (x1, ..., xn) ∈n
//U svrhu testiranja u funkciji main() deklarirati polje od 15 elemenata te omogućiti korisniku popunjavanje polja.
//Iskoristiti polje u pozivu napisane funkcije te ispisati na ekran povratnu vrijednost.

float funk(float p[]) {
	float z = 0;
	int i;
	for (i = 2; i < 14; i++) {
		z += (p[i - 1] + p[i] * p[i] - p[i + 1] * p[i + 1] * p[i + 1]) / (i - 1);
	}
	return z;
}


int main() {
	float p[15];
	int i;
	printf("Unesite elemente polja: ");
	for (i = 0; i < 15; i++)
		scanf("%f", &p[i]);
	printf("%f", funk(p));
}