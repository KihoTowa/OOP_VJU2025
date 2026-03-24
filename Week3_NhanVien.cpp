#include <iostream>
#include <list>
using namespace std;

class NhanVien
{
    private:
        string tenNhanVien;
        double luongCoBan;
        double heSoLuong;
        
    public:
    double LUONG_MAX= 1000000000;
    double get_luongCoBan () const { return luongCoBan; }
    double get_heSoLuong () const { return heSoLuong; }
    double luong=0;
    
    bool TangLuong(int delta)
    {
        double luongMoi = TinhLuong()+ delta;
        if (luongMoi>LUONG_MAX)
        {
            cout<<"Vuot muc luong toi da";
            return false;
        }
        else
        {
            luong = TinhLuong()+ delta;
            return true;
        }
    }

    double TinhLuong()
    {
        int luong_tam_tinh = get_luongCoBan() * get_heSoLuong();
        return luong_tam_tinh;
    }
    void nhapTTin()
    {
        cout<<"Nhap ten nhan vien: ";
        cin >> tenNhanVien;
        cout<< "Nhap luong co ban: ";
        cin>>luongCoBan; 
        cout<<"Nhap he so luong: ";
        cin>>heSoLuong;
    }
    void inTTin(int delta)
    {
        cout<< "Nhan vien: "<< tenNhanVien<<endl;
        if (TangLuong(delta)==true)
        {
            cout<< "Luong nhan vien la: "<< luong<<endl; 
        }
        else {cout<< "Luong nhan vien la: "<< TinhLuong()<<endl; }
    }

};

int main()
{
    list<NhanVien> DS;
    int delta;
    while(true)
    {
        NhanVien nv;
        cout<<"1.Nhap thong tin nhan vien"<<endl;
        cout<<"2.Xem thong tin nhan vien "<<endl;
        cout<<"3.Tang luong cho nhan vien"<<endl;
        cout<<"4.Thoat"<<endl;
        int choice;
        cin>>choice;
        switch (choice)
        {
            case 1:
        {
            nv.nhapTTin();
            DS.push_back(nv);
        }
            case 2:
        {
            for( NhanVien & nv : DS)
            {
                nv.inTTin(delta);        
            }
        }
            case 3:
        {   
            cout<<"Nhap so luong tang: ";
            cin>>delta;
            nv.TangLuong(delta);
        }
            case 4: 
        {
            cout<<"Tam biet";
            exit(0);
        }
        }
    }
}
