#include <stdio.h>

long giaithua(int n) {
    long gt = 1;
    int i;

    for (i = 1; i <= n; i++) {
        gt = gt * i;
    }

    return gt;
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0)
        printf("Khong tinh duoc");
    else
        printf("Giai thua = %ld", giaithua(n));
}
