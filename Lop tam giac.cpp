#include <iostream>
#include <cmath>
using namespace std;

class TamGiac {
    float a, b, c;

public:
    void nhap() {
        cout << "Nhap 3 canh tam giac: ";
        cin >> a >> b >> c;
    }

    bool hopLe() {
        return a > 0 && b > 0 && c > 0 &&
               a + b > c && a + c > b && b + c > a;
    }

    void tinh() {
        if (!hopLe()) {
            cout << "Ba canh khong tao thanh tam giac";
        } else {
            float p = (a + b + c) / 2;
            float s = sqrt(p * (p - a) * (p - b) * (p - c));

            cout << "Chu vi = " << 2 * p << endl;
            cout << "Dien tich = " << s;
        }
    }
};

int main() {
    TamGiac tg;
    tg.nhap();
    tg.tinh();

    return 0;
}
