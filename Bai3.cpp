#include <iostream>
using namespace std;

class Complex {
private:
    float a, b;

public:
    Complex() {
        a = 0;
        b = 0;
    }

    Complex(float x, float y) {
        a = x;
        b = y;
    }

    void nhap() {
        cout << "Nhap phan thuc: ";
        cin >> a;

        cout << "Nhap phan ao: ";
        cin >> b;
    }

    void in() {
        cout << a;

        if (b >= 0)
            cout << " + " << b << "i";
        else
            cout << " - " << -b << "i";
    }

    friend Complex cong(Complex x, Complex y) {
        return Complex(x.a + y.a, x.b + y.b);
    }

    friend Complex tru(Complex x, Complex y) {
        return Complex(x.a - y.a, x.b - y.b);
    }
};

int main() {
    Complex x, y, tong, hieu;

    cout << "Nhap so phuc x:\n";
    x.nhap();

    cout << "\nNhap so phuc y:\n";
    y.nhap();

    tong = cong(x, y);
    hieu = tru(x, y);

    cout << "\nSo phuc x: ";
    x.in();

    cout << "\nSo phuc y: ";
    y.in();

    cout << "\nTong hai so phuc: ";
    tong.in();

    cout << "\nHieu hai so phuc: ";
    hieu.in();

    cout << endl;
    return 0;
}
