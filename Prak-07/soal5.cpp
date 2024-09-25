#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    double mean;
    long jumlah_data;
    long i, maksimum, lokasi;
    long total = 0;
    int jenis;

    cout << "Masukkan jumlah data yang akan dimasukkan: ";
    cin >> jumlah_data;

    long nilai[jumlah_data];

    for (i = 0; i < jumlah_data; i ++){
        cout << "Nilai ke- " << i << " = ";
        cin >> nilai[i];
    }

    cout << "\n=OUPUT=\n";
    for(i = 0; i < jumlah_data; i ++){
        cout << "Nilai["<< i <<"] : "<< nilai[i];
        jenis = nilai[i]%2;
        if (jenis == 0 ) {
            cout << " Genap" << endl;
        } else {
            cout << " Ganjil" << endl;
        }
    }

    getch();
    return 0;
}

