#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    int a;
    int count = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        count += i;
    }
    printf("%d", count);
}