/*�� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.

���� ����
a�� b�� ���� ���� �� �� �ƹ� ���� �����ϼ���.
a�� b�� -10,000,000 �̻� 10,000,000 ������ �����Դϴ�.
a�� b�� ��Ұ���� ���������� �ʽ��ϴ�.*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#pragma warning(disable:4996)

long long solution(int a, int b) {
	long long answer = 0;
	long long result = 0;
	if (a < b) {
		for (int i = b; i >= a; i--)
			result = result + i;
	}
	else {
		for (int i = a; i >= b; i--)
			result = result + i;
	}
	printf("%lld", result);
	answer = result;
	return answer;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	solution(a, b);
}