#include <stdio.h>
#include <stdlib.h>

int Recur_Fib(int);
int Itera_Fib(int);

int main(void) {
	int n; 						//F(n)
	printf("輸入Fib第幾項:\n");
	scanf("%d", &n);
	printf("test : Fib(%d)\n", n);			//test
	
	printf("Recur_Fib(%d) = %d\n", n, Recur_Fib(n));
	printf("Itera_Fib(%d) = %d", n, Itera_Fib(n));
	
	return 0;	
}

int Recur_Fib(int n) {
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else return Recur_Fib(n - 1) + Recur_Fib(n - 2);
}

int Itera_Fib(int n) {
	int c[100],i;					//count
	c[0] = 0;
	c[1] = 1;		
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else {
		for(i = 2; i <= n; i++) {
			c[i] = c[i - 1] + c[i - 2];	
		}
		return c[n];
	}
}


//老師寫的Itera_Fib
/*
int Itera_Fib(int n) {
	int c, i, a = 0, b = 1;					//count		
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else {
		for(i = 2; i <= n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}
*/
