#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int n, prime[1000];
	int i, cnt = 0, check;
	printf("Input Number : ");
	scanf("%d", &n);
	for (i = 2; i <= n; i++) {
		prime[i] = 1; //초기화
	}
	for (i = 2; i <= n; i++) {
		for (check = i * i; check <= n; check += i) {
			prime[check] = 0; // 0이 들어간 배열의 위치는 소수가 아니다
		}
	}
	for (i = 2; i <= n; i++) {
		if (prime[i] == 1) { // if문으로 prime배열에 1이 들어가 있는 수를 찾는다
			printf("%d ", i); // 1이 있다면 출력
			cnt++; // 소수의 총 갯수를 추가
		}
	}
	printf("전체 소수는 %d\n", cnt); // 소수의 총 갯수 출력
	return 0;
}