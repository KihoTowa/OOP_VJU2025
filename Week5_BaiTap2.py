DanhSach = []
class NhanVien:
    luongmax = 10**15
    def __init__(self,manv,hoten,namsinh,gioitinh,diachi,hsluong):
        self.manv=manv
        self.hoten=hoten
        self.namsinh=namsinh
        self.gioitinh=gioitinh
        self.diachi=diachi
        self.hsluong=hsluong
    def __str__(self):
        return( f"Ma nhan vien: {self.manv}, Ho ten: {self.hoten},"
                f"Nam sinh: {self.namsinh}, Gioi tinh: {self.gioitinh}"
                f"Dia chi: {self.diachi}")
    def TinhLuong(self):
        return self.hsluong

class CongTacVien(NhanVien):
    def __init__(self,manv,hoten,namsinh,gioitinh,diachi,hsluong,th_hop_dong,phucapld):
        super().__init__(manv,hoten,namsinh,gioitinh,diachi,hsluong)
        self.th_hop_dong=th_hop_dong
        self.phucapld=phucapld
    def TinhLuong(self):
        return super.TinhLuong()+self.phucapld

class NhanVienChinhThuc(NhanVien):
    def __init__(self,manv,hoten,namsinh,gioitinh,diachi,hsluong,vitri):
        super().__init__(manv,hoten,namsinh,gioitinh,diachi,hsluong)
        self.vitri=vitri
        
class TruongPhong(NhanVien):
    def __init__(self,manv,hoten,namsinh,gioitinh,diachi,hsluong,ngayquanly,phucapql):
        super().__init__(manv,hoten,namsinh,gioitinh,diachi,hsluong)
        self.ngayquanly=ngayquanly
        self.phucap=phucapql
    def TinhLuong(self):
        return super.TinhLuong()+self.phucapql()
    