#include <stdio.h>
#include <stdlib.h>

int GCD(int, int);

int main(void) {
	int A, B;
	printf("��JA B:\n");
	scanf("%d %d", &A, &B);
	printf("��J��A = %d, ��J��B = %d\n\n", A, B);
	
	printf("A�PB���̤j���]�� = %d", GCD(A,B));
	return 0;	
}

int GCD(int a, int b) {
	if(a % b == 0) return b;
	else return GCD(b, a % b);
}
