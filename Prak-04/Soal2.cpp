#include <iostream>
using namespace std;

int main (){
    int i, x=1, y=2, z;
    cout << "==== Program Deret Bilangan Genap ====\n";
    cout << "Masukkan panjang deret: ";
    cin>>i;
    
    cout << "Berikut merupakan deret bilangan genap: \n";
    cout << y << " ";
    if (i != 1){
        while (x != i){
            x++;
            y = y+2;
            cout << y << " ";

        }
    }
    cin.get();
    return 0;
}