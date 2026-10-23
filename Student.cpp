
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string hoTen;
    double diemKy1, diemKy2;
    
public:
    void thietLap(string ten, double d1, double d2) {
        hoTen = ten;
        diemKy1 = d1;
        diemKy2 = d2;
    }
    
    void nhap() {
        cout << "Nhap ho ten: ";
        cin.ignore();
        getline(cin, hoTen);
        
        cout << "Nhap diem ky 1: ";
        cin >> diemKy1;
        
        cout << "Nhap diem ky 2: ";
        cin >> diemKy2;
    }
    
    void hienThi() {
        cout << hoTen << "\t"
             << diemKy1 << "\t"
             << diemKy2 << "\t"
             << tinhDTB() << endl;
    }
    
    double tinhDTB() {
        return (diemKy1 + 2 * diemKy2) / 3;
    }
    
    bool datYeuCau() {
        return tinhDTB() >= 5;
    }
};

int main() {
    Student sv[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << ":\n";
        sv[i].nhap();
    }
    
    cout << "\nDANH SACH 5 SINH VIEN:\n";
    cout << "Ho ten\tDiem ky 1\tDiem ky 2\tDTB\n";
    
    for (int i = 0; i < 5; i++) {
        sv[i].hienThi();
    }
    
    cout << "\nDANH SACH SINH VIEN CO DTB CA NAM >= 5:\n";
    cout << "Ho ten\tDiem ky 1\tDiem ky 2\tDTB\n";
    
    for (int i = 0; i < 5; i++) {
        if (sv[i].datYeuCau()) {
            sv[i].hienThi();
        }
    }
    
    return 0;
}
