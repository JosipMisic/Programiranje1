//Napisati funkciju koja racuna i vraca zbroj znamenki svih djelitelja predanog joj cijelog broja.
//Izdvojiti korak izracuna zbroja znamenki pojedinog djelitelja u posebnu funkciju.
//U svrhu testiranja u funkciji main() pozvati napisanu funkciju s brojem 24578 kao argumentom i na ekran ispisati povratnu vrijednost.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int djelitelji(int n) {
	int sum = 0;
	int i;
	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			sum += znamenke(i);
	}
	return sum;
}
int znamenke(int n) {
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	printf("%d", djelitelji(24578));
	return 0;
}
