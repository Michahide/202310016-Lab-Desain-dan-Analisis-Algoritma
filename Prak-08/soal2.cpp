#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    long jumlah_data;
    long i, temp;
    long total = 0;

    cout << "Masukkan jumlah data yang akan dimasukkan: ";
    cin >> jumlah_data;

    long nilai[jumlah_data];

    for (i = 0; i < jumlah_data; i ++){
        cout << "Nilai ke- " << i << " = ";
        cin >> nilai[i];
    }

    for(i = 0; i < jumlah_data; i++) {
        for (int j = 0; j < jumlah_data; j++){
            if (nilai[i] < nilai [j]){
                temp = nilai [i];
                nilai[i] = nilai[j];
                nilai[j] = temp;
            }
        }
    }

    cout << "\n=OUTPUT SECARA ASCENDING=\n";
    for(i = 0; i < jumlah_data; i ++){
        cout << "Nilai["<< i <<"] : "<< nilai[i] << endl;
    }

    getch();
    return 0;
}
