#include<conio.h> 
#include<iostream> 
using namespace std; 
int main(){ 
    float Quantity, Harga, Total, Total_Bayar, Diskon; 
    cout<<"Masukkan jumlah barang: "; cin>>Quantity;
    cout<<endl;
    cout<<"Masukkan harga barang: "; cin>>Harga;
    cout<<endl;
    Total=Harga*Quantity;
    cout<<"Total: "<<Total<<endl; 
    if (Total>200000){
        Diskon=0.05;
        cout<<"Diskon: 5% \n"; 
    }
    Total_Bayar=Total*(1-Diskon);
    cout<<"Total yang harus dibayarkan: "<<Total_Bayar;
    getch(); 
    return 0; 
}