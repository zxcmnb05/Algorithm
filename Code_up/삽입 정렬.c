#include <stdio.h>

void iSort(int li[], int n) {
	int i, j, temp;
	for (i = 1; i < n; i++) {
		temp = li[i]; // �迭 [1]�� ��, 2��° ������
		for (j = i - 1; j >= 0 && li[j] > temp; j--) {
			li[j + 1] = li[j];
		}
		li[j + 1] = temp; // ��������

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