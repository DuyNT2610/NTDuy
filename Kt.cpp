#include <iostream>
#include <cmath>
using namespace std;

class PhuongTrinhBac2 {
private:
    double a, b, c;

public:
    void nhap() {
        cin >> a >> b >> c;
    }

    void giai() {
        if (a == 0) {
            if (b == 0) {
                if (c == 0)
                    cout << "Phuong trinh vo so nghiem";
                else
                    cout << "Phuong trinh vo nghiem";
            } else {
                cout << "x = " << -c / b;
            }
        } else {
            double delta = b * b - 4 * a * c;

            if (delta < 0) {
                cout << "Phuong trinh vo nghiem";
            } else if (delta == 0) {
                cout << "x = " << -b / (2 * a);
            } else {
                cout << "x1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
                cout << "x2 = " << (-b - sqrt(delta)) / (2 * a);
            }
        }
    }
};

int main() {
    PhuongTrinhBac2 p;
    p.nhap();
    p.giai();
    return 0;
}


Câu 2

#include <iostream>
#include <string>
using namespace std;

class NGUOI {
protected:
    string hoten;
    int namsinh;
    string diachi;

public:
    NGUOI() {
        hoten = "";
        namsinh = 0;
        diachi = "";
    }

    void nhap() {
        cout << "Ho ten: ";
        getline(cin >> ws, hoten);
        cout << "Nam sinh: ";
        cin >> namsinh;
        cout << "Dia chi: ";
        getline(cin >> ws, diachi);
    }

    void xuat() {
        cout << "Ho ten: " << hoten << endl;
        cout << "Nam sinh: " << namsinh << endl;
        cout << "Dia chi: " << diachi << endl;
    }
};

class SINHVIEN : public NGUOI {
private:
    double diemlythuyet;
    double diemthuchanh;

public:
    SINHVIEN() {
        diemlythuyet = 0;
        diemthuchanh = 0;
    }

    void nhap() {
        NGUOI::nhap();
        cout << "Diem ly thuyet: ";
        cin >> diemlythuyet;
        cout << "Diem thuc hanh: ";
        cin >> diemthuchanh;
    }

    double tinhdiem() {
        return (diemlythuyet + diemthuchanh * 2) / 3;
    }

    void xuat() {
        NGUOI::xuat();
        cout << "Diem ly thuyet: " << diemlythuyet << endl;
        cout << "Diem thuc hanh: " << diemthuchanh << endl;
        cout << "Diem trung binh: " << tinhdiem() << endl;
    }
};

int main() {
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;

    SINHVIEN ds[100];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << endl;
        ds[i].nhap();
    }

    cout << "\nDANH SACH SINH VIEN\n";
    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien thu " << i + 1 << endl;
        ds[i].xuat();
    }

    cout << "\nDANH SACH SINH VIEN CO DIEM TRUNG BINH >= 7\n";
    for (int i = 0; i < n; i++) {
        if (ds[i].tinhdiem() >= 7) {
            ds[i].xuat();
            cout << endl;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].tinhdiem() < ds[j].tinhdiem()) {
                SINHVIEN temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    cout << "\nDANH SACH SINH VIEN GIAM DAN THEO DIEM TRUNG BINH\n";
    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien thu " << i + 1 << endl;
        ds[i].xuat();
    }

    return 0;
}
