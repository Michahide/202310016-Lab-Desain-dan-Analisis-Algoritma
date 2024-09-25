#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    long jumlah_data = 26;
    long i;
    char nilai[jumlah_data];

    cout << "==== ALFABET ==== \n";

    for (i = 0; i < jumlah_data; i ++){
        cout << "Abjad ke- " << i << " = ";
        cin >> nilai[i];
    }

    cout << "=OUTPUT=\n";
    for(i = 0; i < jumlah_data; i ++){
        cout << "Abjad ["<< i <<"] : "<< nilai[i] << endl;
    }

    getch();
    return 0;
    
}