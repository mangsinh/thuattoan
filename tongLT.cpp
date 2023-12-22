#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Tính tổng luỹ thừa từ 1 đến? -> ");
    scanf("%d", &n);

    for (int i=0; i<=n; i++) {
        sum += i * i;
    }

    printf("Tổng luỹ thừa %d số nguyên đầu tiên -> %d\n", n, sum);
}