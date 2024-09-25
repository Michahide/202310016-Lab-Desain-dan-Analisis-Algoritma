#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int angka; 
    bool cek_prima;

    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka == 0 || angka == 1){
        cek_prima = false;
    }
    else {
        for (int i = 2; i <= angka/2 ; i++){
            if (angka % i == 0){
                cek_prima == false;
                break;
            }
        }
    }
    
    cout << endl;
    if (cek_prima == true){
        cout << angka << " adalah bilangan prima.";
    }
    else{
        cout << angka << " bukan bilangan prima.";
    }
    getch();
    return 0;
}