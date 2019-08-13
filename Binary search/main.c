#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, t)((t) = (x), (x) = (y), (y) = (t))

void sort(int[],int);
int creat_list(void);
int BS(int, int, int, int);

int array[100];
int main(void) {
	int n = creat_list(), SN, L = 0, R = n - 1, mid;		
	printf("n = %d, L = %d, R = %d.\n", n, L, R);		
	printf("輸入要搜尋數字:");
	scanf("%d", &SN);
	printf("Search_Num = %d", SN);

	printf("\nreturn值是%d", BS(L, R, mid, SN));
	
	return 0;												
}

int BS(int L, int R, int mid, int SN) {
	while(L <= R) {
		mid = (L + R) / 2;
		if(SN > array[mid]) {
			L = mid + 1;
		}else if(SN == array[mid]) {
			return mid;
		}else {
			R = mid - 1;	
		}
	}	
	return -1;	
}

int creat_list(void) {
	int i, n;
	int list[100];

	printf("輸入數字的數量來產生:");
	scanf("%d", &n);
	if(n < 1 || n > 100) {
		fprintf(stderr, "Improper value of n.\n");
		exit(1);
	}
	for(i = 0; i < n; i++) {
		list[i] = rand() % 1000;					
	}		
	sort(list, n);
	printf("Sorted array:\n");
	for(i = 0; i < n; i++){
		printf("%d ", list[i]);
		array[i] = list[i];
	}												
	printf("\n");
	
	
	return n;
}

void sort(int list[],int n) {
	int i, j, min, temp;
	
	for(i = 0; i < n - 1; i++) {
		min = i;
		for(j = i + 1; j < n; j++)
			if(list[j] < list[min])
				min = j;
		SWAP(list[i], list[min], temp);
	}
}

