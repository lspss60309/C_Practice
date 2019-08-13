#include <stdio.h>
#include <stdlib.h>

int Recur_Bin(int, int);
int Itera_Bin(int, int);

int main(void) {
	int input_1,input_2;
	printf("輸入C上取下的上值:");
	scanf("%d", &input_1);
	printf("輸入C上取下的下值:");
	scanf("%d", &input_2);
	
	printf("Recur:\n  __\n");
	printf(" /  \\ %d\n", input_1);
	printf("│      ＝ %d\n", Recur_Bin(input_1,input_2));
	printf(" \\  / %d\n", input_2);
	printf("  ￣\n\n");
	
	printf("Itera:\n  __\n");
	printf(" /  \\ %d\n", input_1);
	printf("│      ＝ %d\n", Itera_Bin(input_1,input_2));
	printf(" \\  / %d\n", input_2);
	printf("  ￣\n");	
	
	return 0;	
}

int Recur_Bin(int input_1, int input_2) {
	if(input_1 == input_2 || input_2 == 0)
		return 1;
	else
		return Recur_Bin(input_1 - 1,input_2) + Recur_Bin(input_1 - 1,input_2 - 1);
}

int Itera_Bin(int input_1, int input_2) {
	int i, c = 1;
	if(input_1 == input_2 || input_2 == 0)
		return 1;
	else {
		for(i = 0; i<input_2; i++) {
			c = c * input_1 / (i + 1);
			input_1--;
		}
		return c;
	}
}



