#include <stdio.h>
#pragma warning(disable : 4996)

void hanoi(int n, char from, char by, char to) {
	if (n == 1) { // 원반 한개인 경우
		printf("원반 1 : %c에서 %c로 이동\n", from, to);
	}
	else { // 원반이 두개 이상일때
		hanoi(n - 1, from, to, by); // 자료구조 69쪽 1번 단계
		printf("원반 %d : %c에서 %c로 이동\n", n, from, to); // 자료구조 69쪽 2번 단계  
		hanoi(n - 1, by, from, to);           // 자료구조 69쪽 3번 단계
	}
}

int main() {
	int n = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C'); // 값을 넘김
	return 0;
}	