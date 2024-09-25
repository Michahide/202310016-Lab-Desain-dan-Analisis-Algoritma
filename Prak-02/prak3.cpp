#include<conio.h> 
#include<iostream> 
using namespace std; 
int main(){ 
    int Bilangan; 
    cout<<"masukkan bilangan: "; cin>>Bilangan; 
    if (Bilangan%2==1){
        cout<<"Ganjil"; 
    } else {
        cout<<"Genap";
    }
    getch(); 
    return 0; 
}

