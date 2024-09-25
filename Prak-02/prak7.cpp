#include<conio.h> 
#include<iostream> 
using namespace std; 
int main(){ 
    int UAS, UTS, Tugas, Absen, X; 
    cout<<"Masukkan nilai UAS: "; cin>>UAS;
    cout<<"Masukkan nilai UTS: "; cin>>UTS;
    cout<<"Masukkan nilai Tugas: "; cin>>Tugas;
    cout<<"Masukkan nilai Absen: "; cin>>Absen; 
    X=0.4*UAS+0.3*UTS+0.2*Tugas+0.1*Absen;
    if (X>60){
        cout<<"Nilai akhir "<<X<<" anda LULUS"; 
    } else {
        cout<<"Nilai akhir "<<X<<" anda TIDAK LULUS";;
    }
    getch(); 
    return 0; 
}