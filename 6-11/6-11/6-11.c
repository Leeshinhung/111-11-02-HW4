#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10] = { 7,2,6,9,8,4,1,3,0,5 };
	int tmp;
	printf("before bubble sort data\n");
	for (int i = 0;i < 10;i++) {
		printf("%3d", a[i]);
	}
	printf("\n");
	for (int i = 1;i < 10;i++) {
		for (int j = 0;j < 9;j++) {
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	printf("after bubble sort data\n");
	for (int i = 0;i < 10;i++) {
		printf("%3d", a[i]);
	}
	system("pause");
	return 0;
}