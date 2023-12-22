#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    printf("Tính tổng phân số từ 1 đến? -> ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        sum += 1.0 / i;
    }

    printf("Tổng phân số %d số nguyên đầu tiên -> %.1f\n", n, sum);
}