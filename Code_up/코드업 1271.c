#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int a;
	int max = 0;
	int b;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		scanf("%d", &b);
		if (b >= max) {
			max = b;
		}
	}
	printf("%d", max);
}