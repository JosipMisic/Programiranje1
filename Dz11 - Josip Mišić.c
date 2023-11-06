#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int funk(char* s, int n) {
	int i = 0;
	int br = 0;
	for (i = 0; s[i] != '\0'; i++) {

	}
}

int main() {
	char* s = (char*)malloc(76 * sizeof(char));
	if (s == NULL) {
		printf("Greska");
		exit(EXIT_FAILURE);
	}
	fgets(s, 76, stdin);
	printf("%d", funk(s, 5));

	free(s);
	return 0;
}