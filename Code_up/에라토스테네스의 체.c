#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int n, prime[1000];
	int i, cnt = 0, check;
	printf("Input Number : ");
	scanf("%d", &n);
	for (i = 2; i <= n; i++) {
		prime[i] = 1; //�ʱ�ȭ
	}
	for (i = 2; i <= n; i++) {
		for (check = i * i; check <= n; check += i) {
			prime[check] = 0; // 0�� �� �迭�� ��ġ�� �Ҽ��� �ƴϴ�
		}
	}
	for (i = 2; i <= n; i++) {
		if (prime[i] == 1) { // if������ prime�迭�� 1�� �� �ִ� ���� ã�´�
			printf("%d ", i); // 1�� �ִٸ� ���
			cnt++; // �Ҽ��� �� ������ �߰�
		}
	}
	printf("��ü �Ҽ��� %d\n", cnt); // �Ҽ��� �� ���� ���
	return 0;
}