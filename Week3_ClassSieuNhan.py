class SieuNhan:
    ten = str
    vukhi = str
    mausac = str

    def __init__(self, ten, vukhi, mausac):
        self.ten = ten
        self.vukhi = vukhi
        self.mausac = mausac
    def __str__(self):
        return f"{self.ten} | {self.vukhi} | {self.mausac}"

sieu_nhan_A= SieuNhan('Sei', 'Sung doi', 'Cam')
sieu_nhan_B= SieuNhan('Shi', 'Song kiem', 'Do')
print(sieu_nhan_A,"\n",sieu_nhan_B)