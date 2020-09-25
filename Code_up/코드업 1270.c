#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int a;
	scanf("%d", &a);
	int count = 0;
	for (int i = 1; i <= a; i++) {
		if (i % 10 == 1) {
			count++;
		}
	}
	printf("%d", count);
}