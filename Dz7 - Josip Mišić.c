//1. zadatak
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define n 10

float funk(float x[]) {
	float sum = 0, rezultat = 0;
	int i;
	for (i = 2; i < n - 1; i++) {
		if (x[i - 1] - pow(x[i], 2) + x[i + 1] < 0)
			sum += (x[i - 1] - pow(x[i], 2) + x[i + 1]) * (-1);
		else
			sum += x[i - 1] - pow(x[i], 2) + x[i + 1];
	}
	rezultat = sum / n;
	return sum;
}

int main() {
	srand((unsigned)time(NULL));
	float polje[n], pi = 3.14159;
	int i;
	for (i = 0; i < n; i++) {
		(float)polje[i] = (-3.14159 / 2) + (float)rand() / RAND_MAX * (3.14159 / 2 - (-3.14159 / 2));
	}
	for (i = 0; i < n; i++) {
		printf("%f\n", polje[i]);
	}
	printf("Rezultat: %f", funk(polje));
	return 0;
}

//2.zadatak
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define DG -180
#define GG 180
int main() {
	srand((unsigned)time(NULL));
	int n;
	int i, j;
	int min;
	int polje[19][19];
	do {
		scanf("%d", &n);
	} while (n < 8 || n >= 19);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			do {
				polje[i][j] = DG + (float)rand() / RAND_MAX * (GG - DG);
			} while (polje[i][j] > -50 && polje[i][j] < 50);
		}
	}
	min = polje[0][0];
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (polje[i][j] < min)
				min = polje[i][j];
		}
	}
}