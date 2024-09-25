#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int p, b, c;
    cout << "==== Program Segitiga Angka Ascending ====\n";
    cout << "Masukkan panjang deret: ";
    cin >> p;
    for (int i = 1; i <= p; i++ ){
        for (int l = 1; l <=i; l++){
            c = b + 5;
            b = c;
            cout << c << " ";
        }

        cout << endl;
        b = 0;
    }
    getch();
    return 0;
}