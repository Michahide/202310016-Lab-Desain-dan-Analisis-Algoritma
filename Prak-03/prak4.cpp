#include <iostream>
#include <conio.h>
using namespace std;

int Hari;
long int Harga, Total1;
double Total2, Diskon;

int main (){
    cout<<"Berapa hari Anda menginap? ";
    cin>>Hari;
    cout<<"Berapa harga sewa kamar Anda per hari? ";
    cin>>Harga;
    Total1=Hari*Harga;
    if (Total1>700000){
        Diskon=0.3;
        Total2=Total1*(1-Diskon);
        cout<<"Anda menginap "<<Hari<<" hari dengan harga kamar Rp "<<Harga<<". Anda mendapatkan diskon 30% dan Total yang harus dibayarkan sebesar Rp "<<Total2;
    } else if (Total1>500000){
        Diskon=0.2;
        Total2=Total1*(1-Diskon);
        cout<<"Anda menginap "<<Hari<<" hari dengan harga kamar Rp "<<Harga<<". Anda mendapatkan diskon 20% dan Total yang harus dibayarkan sebesar Rp "<<Total2;
    } else if (Total1>300000){
        Diskon=0.1;
        Total2=Total1*(1-Diskon);
        cout<<"Anda menginap "<<Hari<<" hari dengan harga kamar Rp "<<Harga<<". Anda mendapatkan diskon 10% dan Total yang harus dibayarkan sebesar Rp "<<Total2;
    } else if(Total1<300000){
        cout<<"Anda menginap "<<Hari<<" hari dengan harga kamar Rp "<<Harga<<". Total yang harus dibayarkan sebesar Rp "<<Total1;
    }
    getch();
    return 0;
}