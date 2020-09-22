#include <stdio.h>
#pragma warning (disable : 4996)

int solution(int n) {
    int answer = 0;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count += i;
        }
    }
    answer = count;
    return answer;
}

int main() {
	int n;
	scanf("%d", &n);
	solution(n);
}