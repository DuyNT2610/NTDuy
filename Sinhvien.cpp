
#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
    string maSV, tenSV, nganhHoc;
    double diemToanCaoCap, diemTinDaiCuong, diemC;
    
public:
    void nhap() {
        cout << "Nhap ma sinh vien: ";
        cin >> maSV;
        cin.ignore();
        
        cout << "Nhap ten sinh vien: ";
        getline(cin, tenSV);
        
        cout << "Nhap nganh hoc: ";
        getline(cin, nganhHoc);
        
        cout << "Nhap diem Toan cao cap: ";
        cin >> diemToanCaoCap;
        
        cout << "Nhap diem Tin dai cuong: ";
        cin >> diemTinDaiCuong;
        
        cout << "Nhap diem C++: ";
        cin >> diemC;
    }
    
    double tinhDTB() {
        return (diemToanCaoCap + diemTinDaiCuong + diemC) / 3;
    }
    
    void xuat() {
        cout << maSV << "\t" << tenSV << "\t"
             << nganhHoc << "\t" << tinhDTB() << endl;
    }
    
    bool hocBong() {
        return tinhDTB() >= 8 && diemToanCaoCap >= 5
               && diemTinDaiCuong >= 5 && diemC >= 5;
    }
    
    bool lenLop() {
        return tinhDTB() >= 7 && diemToanCaoCap >= 5
               && diemTinDaiCuong >= 5 && diemC >= 5;
    }
    
    bool thiLai() {
        return diemToanCaoCap < 5 || diemTinDaiCuong < 5
               || diemC < 5;
    }
};

int main() {
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;
    
    SinhVien sv[100];
    
    for (int i = 0; i < n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << ":\n";
        sv[i].nhap();
    }
    
    cout << "\nDANH SACH SINH VIEN CO DTB >= 7:\n";
    for (int i = 0; i < n; i++) {
        if (sv[i].tinhDTB() >= 7)
            sv[i].xuat();
    }
    
    cout << "\nDANH SACH SINH VIEN DUOC HOC BONG:\n";
    for (int i = 0; i < n; i++) {
        if (sv[i].hocBong())
            sv[i].xuat();
    }
    
    cout << "\nDANH SACH SINH VIEN DUOC LEN LOP:\n";
    for (int i = 0; i < n; i++) {
        if (sv[i].lenLop())
            sv[i].xuat();
    }
    
    cout << "\nDANH SACH SINH VIEN THI LAI:\n";
    for (int i = 0; i < n; i++) {
        if (sv[i].thiLai())
            sv[i].xuat();
    }
    
    return 0;
}
