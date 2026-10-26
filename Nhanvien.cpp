#include <iostream>
#include <string>
using namespace std;

class NhanVien {
private:
    string maNV, hoTen;
    int soNgayCong;
    double luongMotNgay, phuCap;

public:
    void nhap() {
        cout << "Nhap ma nhan vien: ";
        getline(cin >> ws, maNV);

        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap so ngay cong: ";
        cin >> soNgayCong;

        cout << "Nhap luong mot ngay: ";
        cin >> luongMotNgay;

        cout << "Nhap phu cap: ";
        cin >> phuCap;
    }

    double tinhLuong() {
        return soNgayCong * luongMotNgay + phuCap;
    }

    void xuat() {
        cout << "Ma NV: " << maNV << endl;
        cout << "Ho ten: " << hoTen << endl;
        cout << "So ngay cong: " << soNgayCong << endl;
        cout << "Luong mot ngay: " << luongMotNgay << endl;
        cout << "Phu cap: " << phuCap << endl;
        cout << "Tien luong: " << tinhLuong() << endl;
    }
};

int main() {
    int n;
    cout << "Nhap so nhan vien: ";
    cin >> n;

    NhanVien ds[100];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap nhan vien thu " << i + 1 << ":\n";
        ds[i].nhap();
    }

    // Sap xep danh sach theo tien luong tang dan
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].tinhLuong() > ds[j].tinhLuong()) {
                NhanVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    cout << "\n===== DANH SACH NHAN VIEN SAU KHI SAP XEP =====\n";

    for (int i = 0; i < n; i++) {
        ds[i].xuat();
        cout << "-------------------\n";
    }

    return 0;
}
