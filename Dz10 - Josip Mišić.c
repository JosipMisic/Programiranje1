#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>

//int zbrojKvadrata(long int n) {
//        int sum = 0;
//        int znk;
//
//        if (n == 0) {     
//            return 0;      
//        }                  
//                           
//        if (n < 0) {       
//            n = n * (-1);  
//        }                  
//
//        while (n!=0) {
//            znk = n % 10;
//            sum += (znk * znk);
//            n /= 10;
//        }
//
//        return sum;    
//}
//int funk(long int* polje, int n) {
//    int i;
//    long int min = polje[0];
//    for (i = 0; i < n; i++) {
//        if (zbrojKvadrata(polje[i]) < min)
//            min =polje[i];
//    }
//    return min;
//}
//int main() {
//	long int* polje = (long int*)malloc(26 * sizeof(long int));
//	int i;
//	for (i = 0; i < 26; i++) {
//		scanf("%ld", &polje[i]);
//	}
//    printf("\n%ld", funk(polje,26));
//	free(polje);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define DG -1.25
#define GG 1.25

float funk(float x[], int n) {
	float sum = 0;
	int i;
	for (i = 0; i <= n - 2; i++) {
		sum += 2 * (x[i + 1] * x[i + 1]);
	}
	return 10 * ((x[0] - 1) * (x[0] - 1)) - sum;
}


int main() {
	srand((unsigned)time(NULL));
	float polje[30];
	int i;
	for (i = 0; i < 30; i++) {
		polje[i] = DG + (float)rand() / RAND_MAX * (GG - DG + 1);
	}
	printf("%f", funk(polje, 30));
	return 0;
}
