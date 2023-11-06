//Omoguæiti korisniku unos dva stringa od maksimalno 100 znakova.
//Ispisati na ekran onaj koji sadrži više malih slova.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char s1[101];
	char s2[101];
	fgets(s1, 101, stdin);
	fgets(s2, 101, stdin);
	int i;
	int brs1 = 0;
	int brs2 = 0;
	for (i = 0; s1[i] != '\0'; i++) {
		if (s1[i] >= 97 && s1[i] <= 122) {
			brs1++;
		}
	}
	for (i = 0; s2[i] != '\0'; i++) {
		if (s2[i] >= 97 && s2[i] <= 122) {
			brs2++;
		}
	}
	if (brs1 > brs2) {
		printf("%s", s1);
	}
	else if (brs2 > brs1) {
		printf("%s", s2);
	}
	return 0;
}
