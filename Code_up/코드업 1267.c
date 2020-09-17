#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a, b, i;
	int temp = 0;
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%d", &b);
		if (b % 5 == 0) {
			temp = temp + b;
		}
	}
	printf("%d", temp);
	return 0;
}