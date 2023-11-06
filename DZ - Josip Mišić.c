//Omoguæiti korisniku unos osam cijelih brojeva.Odrediti i ispisati na ekran
//koliko je unosa bilo djeljivo s pet ili sedam.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int broj1, broj2, broj3, broj4, broj5, broj6, broj7, broj8;
	int br = 0;
	printf("Unesite 1. broj: ");
	scanf("%d", &broj1);
	printf("Unesite 2. broj: ");
	scanf("%d", &broj2);
	printf("Unesite 3. broj: ");
	scanf("%d", &broj3);
	printf("Unesite 4. broj: ");
	scanf("%d", &broj4);
	printf("Unesite 5. broj: ");
	scanf("%d", &broj5);
	printf("Unesite 6. broj: ");
	scanf("%d", &broj6);
	printf("Unesite 7. broj: ");
	scanf("%d", &broj7);
	printf("Unesite 8. broj: ");
	scanf("%d", &broj8);
	if (broj1 % 5 == 0 || broj1 % 7 == 0){
		br++;
	}if (broj2 % 5 == 0 || broj2 % 7 == 0){
		br++;
	}if (broj3 % 5 == 0 || broj3 % 7 == 0){
		br++;
	}if (broj4 % 5 == 0 || broj4 % 7 == 0){
		br++;
	}if (broj5 % 5 == 0 || broj5 % 7 == 0){
		br++;
	}if (broj6 % 5 == 0 || broj6 % 7 == 0){
		br++;
	}if (broj7 % 5 == 0 || broj7 % 7 == 0) {
		br++;
	}if (broj8 % 5 == 0 || broj8 % 7 == 0) {
		br++;
	}
	printf("\n%d unesenih brojeva je djeljivo sa 5 ili 7.", br);
	
	return 0;
}

//Omoguæiti korisniku unos tri cijela broja i ispisati na ekran koji je od njih
//najveæi.

int main() {
	int a, b, c;
	printf("Unesite 3 cijela broja: \n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c)
		printf("Najveci broj je: %d", a);
	else if(b>a && b>c)
		printf("Najveci broj je: %d", b);
	else
		printf("Najveci broj je: %d", c);

	return 0;
}

//Napišite program koji æe ispisati na ekran rješenja kvadratne jednadžbe
//ax2 + bx + c = 0 za unešene realne parametre a, b, c.

#include<math.h>
int main() {
	float a, b, c;
	float d;
	float x1;
	float x2;
	float y1;
	float y2;
	printf("Upisite parametar a: ");
	scanf("%f", &a);
	printf("Upisite parametar b: ");
	scanf("%f", &b);
	printf("Upisite parametar c: ");
	scanf("%f", &c);
	y1 = 0;
	y2 = 0;
	if (a != 0) {
		d = b * b - 4 * a * c;
		if (d > 0) {
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
		}else if (d == 0) {
			x1 = -b / (2 * a);
			x2 = x1;
		}else {
			x1 = -b / (2 * a); 
			x2 = x1;
			y1 = sqrt(-d) / (2 * a); 
			y2 = -y1;
		}
	}
	else {
		printf("Jednadzba nije kvadratna");
	}
	printf("Rjesenja kvadratne jednadzbe su: %.2f+i*(%f) i %.2f+i*(%f)", x1, y1, x2, y2);
	return 0;

}

