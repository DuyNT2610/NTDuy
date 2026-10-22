#include <iostream>
#include <string>
using namespace std;

class HangHoa {
    string maHang, tenHang;
    int soLuong;
    float donGia;

public:
    HangHoa() {
        maHang = "";
        tenHang = "";
        soLuong = 0;
        donGia = 0;
    }

    void nhap() {
        cout << "Nhap ma hang: ";
        cin >> maHang;

        cin.ignore();
        cout << "Nhap ten hang: ";
        getline(cin, tenHang);

        cout << "Nhap so luong: ";
        cin >> soLuong;

        cout << "Nhap don gia: ";
        cin >> donGia;
    }

    float thanhTien() {
        return soLuong * donGia;
    }

    void hienThi() {
        cout << maHang << "\t"
             << tenHang << "\t"
             << soLuong << "\t"
             << donGia << "\t"
             << thanhTien() << endl;
    }
};

int main() {
    int n;
    cout << "Nhap so mat hang: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "So mat hang khong hop le";
        return 0;
    }

    HangHoa ds[100];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap mat hang thu " << i + 1 << ":\n";
        ds[i].nhap();
    }

    cout << "\nDANH SACH HANG HOA\n";
    cout << "Ma hang\tTen hang\tSo luong\tDon gia\tThanh tien\n";

    for (int i = 0; i < n; i++) {
        ds[i].hienThi();
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].thanhTien() < ds[j].thanhTien()) {
                HangHoa tam = ds[i];
                ds[i] = ds[j];
                ds[j] = tam;
            }
        }
    }

    cout << "\nDANH SACH SAU KHI SAP XEP GIAM DAN\n";
    cout << "Ma hang\tTen hang\tSo luong\tDon gia\tThanh tien\n";

    for (int i = 0; i < n; i++) {
        ds[i].hienThi();
    }

    return 0;
}
