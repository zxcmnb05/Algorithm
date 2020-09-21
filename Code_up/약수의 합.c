#include <stdio.h>
#pragma warning (disable : 4996)

int solution(int n) {
	int answer = n;
	printf("%d", answer);
	return answer;
}

int main() {
	int a;
	int count = 0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			count += i;
		}
	}
	solution(count);
}