#include <stdio.h>
#pragma warning(disable : 4996)

void hanoi(int n, char from, char by, char to) {
	if (n == 1) { // ���� �Ѱ��� ���
		printf("���� 1 : %c���� %c�� �̵�\n", from, to);
	}
	else { // ������ �ΰ� �̻��϶�
		hanoi(n - 1, from, to, by); // �ڷᱸ�� 69�� 1�� �ܰ�
		printf("���� %d : %c���� %c�� �̵�\n", n, from, to); // �ڷᱸ�� 69�� 2�� �ܰ�  
		hanoi(n - 1, by, from, to);           // �ڷᱸ�� 69�� 3�� �ܰ�
	}
}

int main() {
	int n = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C'); // ���� �ѱ�
	return 0;
}	