#include <iostream>
#include <conio.h>
using namespace std;
int A;

int main(){
    cout<<"========Menu Makanan======== \n";
    cout<<"Pilih menu: ";
    cin>>A;
    switch (A)
    {
    case 1:
        cout<<"Nasi Goreng dengan harga Rp 15.000,-";
        break;
    case 2:
        cout<<"Gado-gado dengan harga Rp 13.000,-";
        break;
    case 3:
        cout<<"Bubur Ayam dengan harga Rp 10.000,-";
        break;
    case 4:
        cout<<"Ayam bakar dengan harga Rp 18.000,-";
        break;
    default:
        cout<<"Pilihan anda salah.";
        break;
    }
    getch();
    return 0;
}