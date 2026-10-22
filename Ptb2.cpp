#include <iostream>
#incluse <cmath>
using namespace std;

class PhuongTrinhBac2 {
    float a, b, c;

public:
    void nhap() {
        cout << "Nhap a, b, c: ";
        cin >> a >> b >> c;
    }

    void giai() {
        float delta = b * b - 4 * a * c;

        if (a == 0) {
            cout << "Khong phai phuong trinh bac 2";
        } else if (delta < 0) {
            cout << "Phuong trinh vo nghiem";
        } else if (delta == 0) {
            cout << "Phuong trinh co nghiem kep: "
                 << -b / (2 * a);
        } else {
            cout << "x1 = " << (-b + sqrt(delta)) / (2 * a);
            cout << "\nx2 = " << (-b - sqrt(delta)) / (2 * a);
        }
    }
};

int main() {
    PhuongTrinhBac2 pt;
    pt.nhap();
    pt.giai();

    return 0;
}
