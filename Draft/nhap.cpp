#include <iostream>
#include <string>
#include <vector>
using namespace std;

class NhanVien {
protected:
    string MaNhanVien;
    string HoTen;
    long long LuongCB;
public:
    virtual void Nhap() = 0;
    virtual void Xuat() = 0;
    virtual long long Luong() = 0;
    virtual ~NhanVien() {}
};

class NVVP : public NhanVien {
private:
    int SoGioLam;
public:
    NVVP(string ma, string ten, long long lcb, int sogio) {
        MaNhanVien = ma;
        HoTen = ten;
        LuongCB = lcb;
        SoGioLam = sogio;
    }

    void Nhap() override {} // Đã khởi tạo sẵn

    void Xuat() override {
        cout << "NVVP - Ma: " << MaNhanVien << ", Ten: " << HoTen
        << ", LCB: " << LuongCB << ", Gio: " << SoGioLam
        << ", Luong: " << Luong() << endl;
    }

    long long Luong() override {
        long long luong = LuongCB + SoGioLam * 220000;
        if (SoGioLam > 100)
            luong += 5000000;
        return luong;
    }
};
class NVSX : public NhanVien {
private:
    int SoSanPham;
public:
    NVSX(string ma, string ten, long long lcb, int sosanpham) {
        MaNhanVien = ma;
        HoTen = ten;
        LuongCB = lcb;
        SoSanPham = sosanpham;
    }

    void Nhap() override {}

    void Xuat() override {
        cout << "NVSX - Ma: " << MaNhanVien << ", Ten: " << HoTen
            << ", LCB: " << LuongCB << ", SP: " << SoSanPham
            << ", Luong: " << Luong() << endl;
    }

    long long Luong() override {
        long long luong = LuongCB + SoSanPham * 175000;
        if (SoSanPham > 150)
            luong *= 1.2;
        return luong;
    }
};

class NVQL : public NhanVien {
private:
    float HeSoChucVu;
    long long Thuong;
public:
    NVQL(string ma, string ten, long long lcb, float hscv, long long thuong) {
        MaNhanVien = ma;
        HoTen = ten;
        LuongCB = lcb;
        HeSoChucVu = hscv;
        Thuong = thuong;
    }

    void Nhap() override {}

    void Xuat() override {
        cout << "NVQL - Ma: " << MaNhanVien << ", Ten: " << HoTen
        << ", LCB: " << LuongCB << ", HSCV: " << HeSoChucVu
        << ", Thuong: " << Thuong << ", Luong: " << Luong() << endl;
    }

    long long Luong() override {
        return LuongCB * HeSoChucVu + Thuong;
    }
};

int main() {
    vector<NhanVien*> dsNhanVien;

    // Văn phòng
    dsNhanVien.push_back(new NVVP("101", "Nguyen A", 4500000, 200));
    dsNhanVien.push_back(new NVVP("102", "Nguyen B", 5600000, 100));
    dsNhanVien.push_back(new NVVP("103", "Nguyen C", 8900000, 90));

    // Sản xuất
    dsNhanVien.push_back(new NVSX("201", "Nguyen D", 7800000, 250));
    dsNhanVien.push_back(new NVSX("202", "Nguyen E", 4500000, 110));
    dsNhanVien.push_back(new NVSX("203", "Nguyen F", 6600000, 360));
     // Quản lý
    dsNhanVien.push_back(new NVQL("301", "Nguyen G", 8500000, 1.3, 19500000));
    dsNhanVien.push_back(new NVQL("302", "Nguyen H", 7600000, 1.2, 18600000));

    // Xuất thông tin
    cout << "--- DANH SACH NHAN VIEN DAI LY ---\n";
    for (NhanVien* nv : dsNhanVien) {
        nv->Xuat();
    }

    // Giải phóng bộ nhớ
    for (NhanVien* nv : dsNhanVien) {
        delete nv;
    }

    return 0;
}