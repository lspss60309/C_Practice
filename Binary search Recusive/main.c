#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, t)((t) = (x), (x) = (y), (y) = (t))

void Creat_array(int[], int);
void sort(int[], int);
/**********************************************************************/
int Recursive_Binary_Search(int[], int, int, int);

int main(void) {
	int array[7], SN, R = 6, L = 0;
	Creat_array(array, 7);
	sort(array, 7);

	printf("輸入要尋找數字:");
	scanf("%d", &SN);
	
	printf("Search_Num = %d", SN);

	printf("\nreturn值是%d", Recursive_Binary_Search(array, SN, R, L));
	
	return 0;	
}

int Recursive_Binary_Search(int list[], int SN, int R, int L) {
	int mid;
	if(L <= R) {
		mid = (L + R) / 2;
		if(SN > list[mid]) {
			Recursive_Binary_Search(list, SN, R,mid + 1);
		}else if(SN == list[mid]) {
			return mid;
		}else {
			Recursive_Binary_Search(list, SN, mid - 1,L);	
		}
	}else return -1;
}
/**********************************************************************/
void Creat_array(int array[],int n) {
	int i;
	printf("Test: array長度 = %d\n\nUnsort : ", n);
	for(i = 0; i < n; i++) {
		array[i] = rand() % 1000;		
		printf("%d ", array[i]);
	}
	printf("\n");
}

void sort(int list[], int n) {
	int i, j, min, temp;
	
	for(i = 0; i < n - 1; i++) {
		min = i;
		for(j = i + 1; j < n; j++)
			if(list[j] < list[min])
				min = j;
		SWAP(list[i], list[min], temp);
	}
	printf("Sorted : ");	
	for(i = 0; i < n; i++) {
		printf("%d ", list[i]);	
	}printf("\n\n");
}
