#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string hoten;
    float diem1, diem2;

public:
    Student() {
        hoten = "";
        diem1 = 0;
        diem2 = 0;
    }

    void nhap() {
        cout << "Nhap ho ten: ";
        getline(cin >> ws, hoten);
        cout << "Nhap diem ky 1: ";
        cin >> diem1;
        cout << "Nhap diem ky 2: ";
        cin >> diem2;
    }

    void hienThi() {
        cout << "Ho ten: " << hoten;
        cout << " | Diem ky 1: " << diem1;
        cout << " | Diem ky 2: " << diem2;
        cout << " | Diem trung binh: " << diemTB() << endl;
    }

    float diemTB() {
        return (diem1 + 2 * diem2) / 3;
    }

    bool dat() {
        return diemTB() >= 5;
    }

    string layTen() {
        int vitri = hoten.find_last_of(' ');
        if (vitri == -1)
            return hoten;
        return hoten.substr(vitri + 1);
    }
};

int main() {
    int n;
    Student a[100];

    cout << "Nhap so sinh vien: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien thu " << i + 1 << ":\n";
        a[i].nhap();
    }

    cout << "\nDANH SACH SINH VIEN\n";
    for (int i = 0; i < n; i++)
        a[i].hienThi();

    cout << "\nSINH VIEN CO DIEM TRUNG BINH >= 5\n";
    for (int i = 0; i < n; i++) {
        if (a[i].dat())
            a[i].hienThi();
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].layTen() > a[j].layTen()) {
                Student temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\nDANH SACH SAP XEP THEO TEN\n";
    for (int i = 0; i < n; i++)
        a[i].hienThi();

    return 0;
}
