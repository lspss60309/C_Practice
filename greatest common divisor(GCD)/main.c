#include <stdio.h>
#include <stdlib.h>

int GCD(int, int);

int main(void) {
	int A, B;
	printf("輸入A B:\n");
	scanf("%d %d", &A, &B);
	printf("輸入的A = %d, 輸入的B = %d\n\n", A, B);
	
	printf("A與B的最大公因數 = %d", GCD(A,B));
	return 0;	
}

int GCD(int a, int b) {
	if(a % b == 0) return b;
	else return GCD(b, a % b);
}
