#include <iostream>
#include <conio.h>
using namespace std;

int Dosen, Panitia, Karyawan, Skor_Dosen, Skor_Panitia, Skor_Karyawan, Skor_Total;

int main(){
    cout<<"Masukkan jumlah tanda tangan dari Dosen: ";
    cin>>Dosen;
    cout<<"Masukkan jumlah tanda tangan dari Panitia: ";
    cin>>Panitia;
    cout<<"Masukkan jumlah tanda tangan dari Karyawan: ";
    cin>>Karyawan;

    Skor_Dosen = Dosen*3;
    Skor_Panitia = Panitia*2;
    Skor_Karyawan = Karyawan*1;
    Skor_Total= Skor_Dosen+Skor_Panitia+Skor_Karyawan;
    if (Skor_Total > 80)
    {
        cout<<"Anda LULUS";
    } else if (Skor_Total >= 60 && Skor_Total <= 80){
        cout<<"Anda mendapatkan Hukuman Ringan";
    } else if (Skor_Total<60){
        cout<<"Anda mendapatkan Hukuman Berat";
    }
    
    getch();
    return 0;
}