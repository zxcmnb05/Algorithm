/*�ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� return �ϴ� solution �Լ��� ����� �ּ���.
������� N = 123�̸� 1 + 2 + 3 = 6�� return �ϸ� �˴ϴ�.*/

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