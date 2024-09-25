#include <iostream>
#include <conio.h>
using namespace std;


int main (){
    long jumlah_data;
    long i, m, bil;
    long total = 0;
    bool angka_prima = true;

    cout << "Masukkan jumlah data yang akan dimasukkan: ";
    cin >> jumlah_data;

    long nilai[jumlah_data];

    for (i = 0; i < jumlah_data; i ++){
        cout << "Nilai ke- " << i << " = ";
        cin >> nilai[i];
    }


    cout << "\n=BILANGAN PRIMA=\n";
	for(i=0; i < jumlah_data; i++){
		bil=0;
		for(int j = 1 ;j <= nilai[i]; j++) {
			if(nilai[i] % j == 0){
			bil = bil + 1;
			}
		}
			if (bil == 2 ){
                cout << "Nilai["<< i <<"] : X" << endl;
			} else {
                cout << "Nilai["<< i <<"] : "<< nilai[i] << endl;
            }
	}	
   
   getch();
   return 0; 
}

    