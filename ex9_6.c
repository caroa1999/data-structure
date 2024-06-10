#include <stdio.h>
void shellSort(int a[], int size);

int main(void) {
	int list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n정렬할 원소 : ");
	printf("\n\n <<< 셀 정렬 수행 >>>\n");
	shellSort(list, size);

	getchar(); return 0;
}