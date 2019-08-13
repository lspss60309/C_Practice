#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, t)((t) = (x), (x) = (y), (y) = (t))
#define num 3

void Perm(char *, int, int);

int main(void) {
	char list[num] = {"abc"};//char list[num] = {'a', 'b', 'c'};
	Perm(list,0,num - 1);
	return 0;	
}

void Perm(char *list, int i, int n) {
	int j, temp;
	if(i == n) {
		for(j = 0; j <= n; j++) printf("%c", list[j]);
		printf("\n");
	}else {
		for(j = i; j <= n; j++) {
			SWAP(list[i], list[j], temp);
			Perm(list, i + 1, n);
			SWAP(list[i], list[j], temp);
		}
	}
}
