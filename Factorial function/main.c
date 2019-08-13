#include <stdio.h>
#include <stdlib.h>

int Iterative_fac(int);
int Recusive_fac(int);

int main(void) {
	int n,temp;//n = input_num
	printf("輸入階層數:\n");
	scanf("%d", &n);
	
	printf("1 = %d\n", Iterative_fac(n));
	printf("Recursive_fac中的  %d! = ", n);
	printf(" = %d", Recusive_fac(n));
	
	return 0;	
}

int Iterative_fac(int n) {
	int c = n;
	//n! = n*(n-1)!, 0!=1;
	if(n == 0){
		printf("Iterative_fac中的  %d! = ", n);
		return 1;		
	}else{
		printf("Iterative_fac中的  %d! = ", n);
		while((n - 1) > 0) {
			printf("%d * ", n);
			c = c * (n - 1);
			n--;
		}
		
		return c;
	}
}

int Recusive_fac(int n) {
	if(n == 0) {
		printf("1");
		return 1;
	}else {
		if(n > 1)
			printf("%d * ", n);
		return n*Recusive_fac(n - 1);
	}
}
