#include <bits/stdc++.h>

using namespace std;

class CanBo
{
    public:
        string name, gender, address;
        int age;
        CanBo()
        {
            cout<<"Nhap ten"<<endl;
            cin.ignore();
            getline(cin,name);
            cout<<"Nhap tuoi"<<endl;
            cin>>age;
            cout<<"Nhap gioi tinh"<<endl;
            cin.ignore();
            getline(cin,gender);
            cout<<"Nhap dia chi"<<endl;
            cin.ignore();
            getline(cin,address);
        }
};

class KySu : public CanBo
{
    private:
        int bac;
    public:
        KySu(): CanBo()
        {
            cout<<"Nhap bac cua ky su: ";
            cin>>bac;
        }

};
class CongNhan : public CanBo
{
    private:
        string nganhdaotao;
    public:
        CongNhan():CanBo()
        {
            cout<<"Nhap nganh dao tao cua Cong Nhan: ";
            cin.ignore();
            getline(cin,nganhdaotao);
        }

};
class NhanVien: public CanBo
{
    private:
        string congviec;
    public:
        NhanVien():CanBo()
        {
            cout<<"Nhap cong viec cua Nhan Vien: ";
            cin.ignore();
            getline(cin,congviec);
        }
};

class QuanLyCanBo
{
    vector<CanBo*> DSCB;
    public:
        void Process(int choice)
        {
            switch (choice)
            {
            case 1:
                case1();
                break;
            case 2:
            {
                string a;
                cout<<"Nhap ten muon tim kiem: ";
                cin.ignore();
                getline(cin,a);
                if(DSCB.empty())
                {
                    cout<<"Chua co can bo nao trong danh sach"<<endl;
                }
                else for(CanBo* cb:DSCB)
                {
                    if(cb->name==a)
                    {
                        printCanBo(cb);
                    }
                }
                break;
            }
            case 3:
            {
                int i=1;
                cout<<i<<endl;
                for(CanBo* cb:DSCB)
                {
                    printCanBo(cb);
                }
                break;
            }
            case 4:
                for(CanBo* cb : DSCB)
                {
                    delete cb;
                }
                exit(0);
                break;
            default:
                cout<<"Try again";
                break;
            }
        }
        void case1()
        {
            int choice2;
            cout<<"Chon can bo ma ban muon them:"<<endl;
            cout<<"1. Ky su"<<endl;
            cout<<"2. Cong nhan"<<endl;
            cout<<"3. Nhan vien"<<endl;
            cin>>choice2;
            switch(choice2)
            {
                case 1:
                {
                    CanBo* ks = new KySu();
                    DSCB.push_back(ks);
                    break;
                }
                case 2:
                {
                    CanBo* cn = new CongNhan();
                    DSCB.push_back(cn);
                    break;
                }
                    
                case 3:
                {
                    CanBo* nv = new NhanVien();
                    DSCB.push_back(nv);
                    break;
                }

            }
        }
        void printCanBo(CanBo* cb)
        {
            cout<<"Ten: ";
            cout<<cb->name<<endl;
            cout<<"Tuoi: ";
            cout<<cb->age<<endl;
            cout<<"Gioi tinh: ";
            cout<<cb->gender<<endl;
            cout<<"Dia chi: ";
            cout<<cb->address<<endl;
        }
};

int main()
{
    int choice;
    QuanLyCanBo cb;
    while(true)
    {
        cout<<"1. Them moi can bo"<<endl;
        cout<<"2. Tim kiem thong tin theo ho ten"<<endl;
        cout<<"3. Hien thi thong tin danh sach cac can bo"<<endl;
        cout<<"4. Thoat chuong trinh"<<endl;
        cin>> choice;
        cb.Process(choice);
    }
    
}