#include <iostream>
#include <conio.h>
using namespace std;

short Kode;
int Sisi1, Sisi2, Sisi3, Sisi4, Tinggi, Alas, Sisi_Sejajar1, Sisi_Sejajar2; 
long int Luas, Keliling;

int main(){
    cout<<"======== Menghitung Luas dan Keliling Bangun Datar ======== \n";
    cout<<"List Kode: \n";
    cout<<"1 Trapesium \n";
    cout<<"2 Jajar Genjang \n";
    cout<<"3 Segitiga Sama Kaki \n";
    cout<<"=========================================================== \n";
    cout<<"Masukkan Kode: ";
    cin>>Kode;

    if(Kode == 1){
        cout<<"======== Menghitung Luas dan Keliling Trapesium ======== \n";
        cout<<"Masukkan Sisi 1: ";
        cin>>Sisi1;
        cout<<"Masukkan Sisi 2: ";
        cin>>Sisi2;
        cout<<"Masukkan Sisi 3: ";
        cin>>Sisi3;
        cout<<"Masukkan Sisi 4: ";
        cin>>Sisi4;
        cout<<"Masukkan Sisi Sejajar 1: ";
        cin>>Sisi_Sejajar1;
        cout<<"Masukkan Sisi Sejajar 2: ";
        cin>>Sisi_Sejajar2;
        cout<<"Masukkan Tinggi Trapesium: ";
        cin>>Tinggi;
        cout<<"-------------------------------------------------------- \n";
        Keliling = Sisi1+Sisi2+Sisi3+Sisi4;
        Luas = (Sisi_Sejajar1+Sisi_Sejajar2)*Tinggi/2;
        cout<<"Keliling Trapesium   : "<<Keliling<<endl;
        cout<<"Luas Trapesium       : "<<Luas<<endl;
    } 
    
    else if (Kode == 2){
        cout<<"======== Menghitung Luas dan Keliling Jajar Genjang ======== \n";
        cout<<"Masukkan Sisi Miring: ";
        cin>>Sisi1;
        cout<<"Masukkan Alas: ";
        cin>>Alas;
        cout<<"Masukkan Tinggi Jajar Genjang: ";
        cin>>Tinggi;
        cout<<"------------------------------------------------------------ \n";
        Keliling = 2*(Alas+Sisi1);
        Luas = Alas*Tinggi;
        cout<<"Keliling Jajar Genjang   : "<<Keliling<<endl;
        cout<<"Luas Jajar Genjang       : "<<Luas<<endl;
    }

    else if(Kode == 3){
        cout<<"======== Menghitung Luas dan Keliling Segitiga Sama Kaki ======== \n";
        cout<<"Masukkan Sisi Miring: ";
        cin>>Sisi1;
        cout<<"Masukkan Alas: ";
        cin>>Alas;
        cout<<"Masukkan Tinggi Segitiga Sama Kaki: ";
        cin>>Tinggi;
        cout<<"------------------------------------------------------------ \n";
        Keliling = Alas+2*Sisi1;
        Luas = Alas*Tinggi/2;
        cout<<"Keliling Segitiga Sama Kaki   : "<<Keliling<<endl;
        cout<<"Luas Segitiga Sama kaki       : "<<Luas<<endl;
    }

    else {
        cout<<"Pilihan anda salah.";
    }
    getch();
    return 0;
}