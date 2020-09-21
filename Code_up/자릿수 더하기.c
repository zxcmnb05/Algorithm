/*자연수 N이 주어지면, N의 각 자릿수의 합을 구해서 return 하는 solution 함수를 만들어 주세요.
예를들어 N = 123이면 1 + 2 + 3 = 6을 return 하면 됩니다.*/

#include <stdio.h>
#pragma warning(disable:4996)

int solution(int n) {
    int answer = 0;
    for (int i = n; i > 0; i = i / 10) {
        answer = answer + i % 10;
    }
    return answer;
}

int main() {
	int n;
	scanf("%d", &n);
	solution(n);
}