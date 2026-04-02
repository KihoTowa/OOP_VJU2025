#include <bits/stdc++.h>

using namespace std;

class HangHoa
{
    public:
        int ma_hang;
        string ten_hang;
        string nha_sx;
        int gia;
    HangHoa(int ma_hang,string ten_hang, string nha_sx,int gia)
    {
        this->ma_hang=ma_hang;
        this->ten_hang=ten_hang;
        this->nha_sx=nha_sx;
        this->gia=gia;
    }
    void displayHangHoa()
    {
        cout<<"Ma hang: "<<ma_hang<<endl;
        cout<<"Ten hang: "<<ten_hang<<endl;
        cout<<"Nha san xuat: "<<nha_sx<<endl;
        cout<<"Gia: "<<gia<<" dong"<<endl;
    }
};

class HangDienMay : public HangHoa
{
    protected:
        int dienap;
        int congsuat;
        int tg_baohanh;
    public:
    HangDienMay(int dienap, int congsuat,int tg_baohanh): HangHoa(25, "Dien May", "Panasonic", 10000)
    {
        this->dienap=dienap;
        this->congsuat=congsuat;
        this->tg_baohanh=tg_baohanh;
    }
    void display()
    {
        displayHangHoa();
        cout<<"Dien ap: "<<dienap<<endl;
        cout<<"Cong suat: "<<congsuat<<endl;
        cout<<"Thoi gian bao hanh: "<<tg_baohanh<<" thang"<<endl;
    }
};
class HangSanhSu: public HangHoa
{
    protected:
        string loainguyenlieu;
    public:
    HangSanhSu(string loainguyenlieu) :HangHoa(101, "Sanh Su", "Bat Trang", 200000)
    {
        this->loainguyenlieu=loainguyenlieu;
    }
    void display()
    {
        cout<<"Loai nguyen lieu: "<<loainguyenlieu<<endl;
        displayHangHoa();
    }
};
class HangThucPham: public HangHoa
{
    protected:
        string ngay_sanxuat;
        string ngay_hethan;
    public:
    HangThucPham(string ngay_sanxuat,string ngay_hethan): HangHoa(38, "Sua Ensure", "Vinamilk", 500000)
    {
        this->ngay_sanxuat=ngay_sanxuat;
        this->ngay_hethan=ngay_hethan;
    }
    void display()
    {
        cout<<"Ngay san xuat: "<<ngay_sanxuat<<endl;
        cout<<"Ngay het han: "<<ngay_hethan<<endl;
        displayHangHoa();
    }
};

int main()
{
    HangDienMay dienMay(220, 100, 24); dienMay.display();
    HangSanhSu sanhSu("Go"); sanhSu.display();
    HangThucPham thucPham("2023-01-01", "2023-12-31"); thucPham.display();

    return 0;
}