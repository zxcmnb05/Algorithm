#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i * a;) {
			printf("*");
		}
		printf("\n");
	}
}