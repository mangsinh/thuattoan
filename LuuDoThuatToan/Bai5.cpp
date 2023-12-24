#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    printf("Nhap n -> ");
    scanf("%d", &n);

    for (int i=0; i<=n; i++) {
        sum += 1.0 / (2*i+1);
        i++;
    }

    printf("Tong 1/1 + 1/3 + ... + 1/%d -> %.1f\n", n, sum);
}

/*
input: 3
output: 1 + 0.3 + 0.2 = 1.5
*/