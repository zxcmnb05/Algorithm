#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int i, n, a;
	int temp = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		temp += a;	
	}
	printf("%d", temp);
}