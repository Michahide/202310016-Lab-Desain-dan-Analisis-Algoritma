#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    double mean;
    long jumlah_data;
    long i;
    long total = 0;

    cout << "Masukkan jumlah data yang akan dimasukkan: ";
    cin >> jumlah_data;

    long nilai[jumlah_data];

    for (i = 0; i < jumlah_data; i ++){
        cout << "Nilai ke- " << i << " = ";
        cin >> nilai[i];
        total = total + nilai[i];
    }

    cout << "\n=OUPUT=\n";
    for(i = 0; i < jumlah_data; i ++){
		cout << "Nilai["<< i <<"] : "<< nilai[i] << endl;
    }

    mean = total/jumlah_data;

    cout << "Rata-rata nilai: " << mean;

    getch();
    return 0;
}