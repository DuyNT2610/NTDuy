#include <iostream>
using namespace std;

class HinhChuNhat {
    float dai, rong;

public:
    void nhap() {
        cout << "Nhap chieu dai: ";
        cin >> dai;
        cout << "Nhap chieu rong: ";
        cin >> rong;
    }

    void tinh() {
        if (dai <= 0 || rong <= 0) {
            cout << "Kich thuoc khong hop le";
        } else {
            cout << "Chu vi = " << (dai + rong) * 2 << endl;
            cout << "Dien tich = " << dai * rong;
        }
    }
};

int main() {
    HinhChuNhat hcn;
    hcn.nhap();
    hcn.tinh();

    return 0;
}
