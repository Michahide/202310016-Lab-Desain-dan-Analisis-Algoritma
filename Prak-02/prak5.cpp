#include<conio.h> 
#include<iostream> 
using namespace std; 
int main(){ 
    int Tahun; 
    cout<<"Masukkan tahun:"; cin>>Tahun;
    cout<<endl; 
    if (Tahun%4==0){
        cout<<"Termasuk Tahun Kabisat"; 
    }
    getch(); 
    return 0; 
}

