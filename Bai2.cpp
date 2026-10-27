#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
    string maSV, hoTen;
    int namSinh;
    float diem;

public:
    void nhap() {
        cout << "Nhap ma sinh vien: ";
        cin >> maSV;

        cout << "Nhap ho ten: ";
        getline(cin >> ws, hoTen);

        cout << "Nhap nam sinh: ";
        cin >> namSinh;

        cout << "Nhap diem: ";
        cin >> diem;
    }

    void hienThi() {
        cout << "Ma SV: " << maSV
             << " | Ho ten: " << hoTen
             << " | Nam sinh: " << namSinh
             << " | Diem: " << diem << endl;
    }

    bool dat() {
        return diem >= 5;
    }

    bool sinhNam2002() {
        return namSinh == 2002;
    }
};

int main() {
    int n;
    SinhVien a[100];

    cout << "Nhap so sinh vien: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien thu " << i + 1 << ":\n";
        a[i].nhap();
    }

    cout << "\nSINH VIEN DAT DIEM >= 5\n";
    for (int i = 0; i < n; i++) {
        if (a[i].dat())
            a[i].hienThi();
    }

    cout << "\nSINH VIEN SINH NAM 2002\n";
    for (int i = 0; i < n; i++) {
        if (a[i].sinhNam2002())
            a[i].hienThi();
    }

    return 0;
}
