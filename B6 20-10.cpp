#include <stdio.h>

int UCLN(int a, int b) {
    int r;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int BCNN(int a, int b) {
    return a / UCLN(a, b) * b;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    printf("UCLN = %d\n", UCLN(a, b));
    printf("BCNN = %d", BCNN(a, b));
}
