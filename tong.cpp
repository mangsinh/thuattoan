#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Tính tổng từ 1 đến? -> ");
    scanf("%d", &n);

    for (int i=0; i<=n; i++) {
        sum += i;
    }

    printf("Tổng %d số nguyên đầu tiên = %d\n", n, sum);
}