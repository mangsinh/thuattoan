#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    printf("Nhap n -> ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        sum += (i+1) / (i+2);
        i++;
    }

    printf("Tong 1/2 + 2/3 + ... + %d/%d -> %.1f\n", n-1, n, sum);
}

/*
input: 3
output: 0.5 + 0.1 = 0.6
*/