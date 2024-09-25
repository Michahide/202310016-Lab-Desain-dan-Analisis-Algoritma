#include<conio.h> 
#include<iostream> 
using namespace std; 
int main(){ 
    int Harga;
    float Quantity, Diskon, Total,Total_Bayar;
    Harga=13000;
    cout<<"===================== \n";
    cout<<"Mangga: Rp "<<Harga<<endl;
    cout<<"===================== \n";
    cout<<"Masukkan jumlah mangga yang dibeli: "; cin>>Quantity;
    cout<<"-------------------------------------------- \n";
    cout<< "Mangga  :   "<<Quantity<<"x             Rp "<<Harga<<endl;
    cout<<"-------------------------------------------- \n";
    Total=Harga*Quantity;
    cout<<"Total                            : Rp "<<Total<<endl;
    if (Quantity>12){
        Diskon=0.1;
        cout<<"Diskon                           : 10% \n"; 
    } else {
        Diskon=0;
        cout<<"Diskon                           : 0% \n";
    }
    Total_Bayar=Total*(1-Diskon);
    cout<<"Total yang harus dibayarkan      : Rp "<<Total_Bayar;
    getch(); 
    return 0; 
}

