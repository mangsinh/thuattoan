#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    printf("Nhap n -> ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        sum += 1.0 / ((i+1) * 2);
    }

    printf("Tong 1/1*2 + 1/2*2 + ... + 1/%d*2 -> %.1f\n", n, sum);
}

/*
input: 3
output: 0.5 + 0.3 + 0.1 = 0.9
*/