#include <stdio.h>
#include <stdlib.h>

int Recur_Ack(int, int);

int main(void) {
	int n_1, n_2;
	printf("輸入兩項數字,中間要空格or輸入兩次:");
	scanf("%d %d", &n_1, &n_2);
	
	printf("\nRecur_Ack(%d, %d) = %d\n", n_1, n_2, Recur_Ack(n_1, n_2));
	return 0;	
}

int Recur_Ack(int input, int input_1) {
	if(input == 0) return (input_1 + 1);
	else if(input_1 == 0) return Recur_Ack(input - 1, 1);
	else
		Recur_Ack(input - 1, Recur_Ack(input, input_1 - 1));
}
