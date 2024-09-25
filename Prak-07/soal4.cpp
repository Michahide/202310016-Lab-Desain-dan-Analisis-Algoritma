#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    double mean;
    long jumlah_data;
    long i, maksimum, lokasi;
    long total = 0;

    cout << "Masukkan jumlah data yang akan dimasukkan: ";
    cin >> jumlah_data;

    long nilai[jumlah_data];

    for (i = 0; i < jumlah_data; i ++){
        cout << "Nilai ke- " << i << " = ";
        cin >> nilai[i];
    }

    cout << "\n=OUPUT=\n";
    for(i = 0; i < jumlah_data; i ++){
		cout << "Nilai["<< i <<"] : "<< nilai[i] << endl;
    }

    maksimum = nilai[0];

    for(i = 0; i < jumlah_data; i++) {
        if (nilai[i] > maksimum)  {
            maksimum = nilai[i];
                lokasi = i;
            }
        }
    cout << "Nilai maksimum adalah " << maksimum << " berada di elemen ke- " << lokasi << endl;

    getch();
    return 0;
}

