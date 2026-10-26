#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
    string maSV, hoTen;
    int namSinh;
    float diemTB;

public:
    SinhVien() {
        maSV = "";
        hoTen = "";
        namSinh = 0;
        diemTB = 0;
    }

    SinhVien(string ma, string ten, int nam, float diem) {
        maSV = ma;
        hoTen = ten;
        namSinh = nam;
        diemTB = diem;
    }

    void nhap() {
        cout << "Nhap ma sinh vien: ";
        getline(cin >> ws, maSV);

        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap nam sinh: ";
        cin >> namSinh;

        cout << "Nhap diem trung binh: ";
        cin >> diemTB;
    }

    void xuat() {
        cout << "Ma SV: " << maSV << endl;
        cout << "Ho ten: " << hoTen << endl;
        cout << "Nam sinh: " << namSinh << endl;
        cout << "Diem TB: " << diemTB << endl;
        cout << "Hoc luc: " << xepLoai() << endl;
    }

    string xepLoai() {
        if (diemTB >= 8.0)
            return "Gioi";
        else if (diemTB >= 6.5)
            return "Kha";
        else if (diemTB >= 5.0)
            return "Trung binh";
        else
            return "Yeu";
    }

    bool laKhaGioi() {
        return diemTB >= 6.5;
    }
};

int main() {
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;

    SinhVien ds[100];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << ":\n";
        ds[i].nhap();
    }

    cout << "\n===== DANH SACH SINH VIEN =====\n";
    for (int i = 0; i < n; i++) {
        ds[i].xuat();
        cout << "-------------------\n";
    }

    cout << "\n===== SINH VIEN KHA VA GIOI =====\n";
    for (int i = 0; i < n; i++) {
        if (ds[i].laKhaGioi()) {
            ds[i].xuat();
            cout << "-------------------\n";
        }
    }

    return 0;
}
