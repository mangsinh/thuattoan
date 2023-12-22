#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Nhap n -> ");
    scanf("%d", &n);

    for (int i= 0; i<n+1; i++) {
        sum += (i+1);
    }

    printf("Tong 1 + 2 + ... + %d -> %d\n", n, sum);
}

/*
input: 3
output: 1 + 2 + 3 = 6
*/