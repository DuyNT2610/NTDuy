#include <iostream>
using namespace std;

class GiaiThua {
    int n;

public:
    void nhap() {
        cout << "Nhap n: ";
        cin >> n;
    }

    void tinh() {
        if (n < 0 || n > 20) {
            cout << "n khong hop le";
            return;
        }

        unsigned long long gt = 1;

        for (int i = 1; i <= n; i++) {
            gt = gt * i;
        }

        cout << n << "! = " << gt;
    }
};

int main() {
    GiaiThua a;
    a.nhap();
    a.tinh();

    return 0;
}
