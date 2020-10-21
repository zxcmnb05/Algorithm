#include <stdio.h>

void iSort(int li[], int n) {
	int i, j, temp;
	for (i = 1; i < n; i++) {
		temp = li[i]; // 배열 [1]은 즉, 2번째 데이터
		for (j = i - 1; j >= 0 && li[j] > temp; j--) {
			li[j + 1] = li[j];
		}
		li[j + 1] = temp; // 오름차순

	}
}

int main() {
	int list[5] = { 5,3,1,8,7 };
	iSort(list, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ", list[i]);
	}
	return 0;
}