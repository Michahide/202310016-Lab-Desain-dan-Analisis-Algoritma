#include<conio.h> 
#include<iostream> 
using namespace std; 
int main(){ 
    int X, Y; 
    cout<<"masukkan nilai X: "; cin>>X;
    cout<<"masukkan nilai Y: "; cin>>Y;
    
    if (X>Y){
        cout<<"Bilangan terbesar"; 
    } else {
        cout<<"Bilangan terkecil";
    }
    getch(); 
    return 0; 
}