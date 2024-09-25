#include <iostream>
#include <conio.h>
using namespace std;


int main (){
    double mean;
    long jumlah_data;
    long i, m, maksimum, lokasi;
    long total = 0;
    int jenis;
    bool angka_prima = true;

    cout << "Masukkan jumlah data yang akan dimasukkan: ";
    cin >> jumlah_data;

    long nilai[jumlah_data];

    for (i = 0; i < jumlah_data; i ++){
        cout << "Nilai ke- " << i << " = ";
        cin >> nilai[i];
    }

    cout << "\n=OUPUT BILANGAN PRIMA=\n";
    for(i = 0; i < jumlah_data; i ++){
        if (nilai[i] == 0 || nilai[i] == 1){
            angka_prima = false;
        }
        else {
            for (int j = 2; j <= nilai[i]/2 ; j++){
                if (nilai[i] % j == 0){
                    angka_prima == false;
                    break;
                }
            }
        }
    
        cout << endl;
        if (angka_prima == true){
            cout << nilai[i] << " adalah bilangan prima.";
        }
    }

    getch();
    return 0;
}

