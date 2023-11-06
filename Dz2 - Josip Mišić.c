#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Omoguciti korisniku unos jednog cijelog broja.Provjeriti je li broj prost ili nije i ispisati poruku.

//int main() {
//	int n;
//	scanf("%d", &n);
//	int i;
//	int brojac=0;
//	for (i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			brojac++;
//		}
//	}
//	if (brojac == 2) {
//		printf("Broj je prost.");
//		}
//	else {
//		printf("Broj nije prost.");
//		}
//	
//	return 0;
//}

//Omoguæiti korisniku unos cijelog broja.Izraèunati i ispisati koliko znamenki ima broj.

int main() {
	int n;
	scanf("%d", &n);
	int i = 0;
	while (n != 0) {
		n = n / 10;
		i++;
	}
	printf("Broj znamenki je: %d", i);
	return 0;
}
