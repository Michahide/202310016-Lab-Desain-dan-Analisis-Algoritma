#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int angka, bil = 0; 
    bool cek_prima;

    cout << "Masukkan angka: ";
    cin >> angka;

    for(int i = 1; i <= angka; i++){
        cout << "Luar if " << angka % i << endl;
        if(angka % i == 0){
            bil = bil + 1;
            cout << bil <<endl << endl;
        }

        if (bil == 2){
            cout << angka << "adalah prima";
        }
    }
    getch();
    return 0;
}