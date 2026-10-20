#include <stdio.h>

long luyThua(int x, int y) {
    long kq = 1;
    int i;

    for (i = 1; i <= y; i++) {
        kq = kq * x;
    }

    return kq;
}

int main() {
    int x, y;
    scanf("%d%d", &x, &y);

    if (y < 0)
        printf("So mu khong hop le");
    else
        printf("Ket qua = %ld", luyThua(x, y));
}
