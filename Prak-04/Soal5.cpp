#include <iostream>
using namespace std;

int main (){
    long int k=1, n=1, i=1, x, y, z, j;
    cout << "Masukkan input pertama: ";
    cin >> x;
    cout << "Masukkan input kedua: ";
    cin >> y;
    cout << "Masukkan input ketiga: ";
    cin >> z;
    while (k <= i){
        while (j <= y){
            while (j <= z){
                n = n*2;
                j++;
            }
            i++;
        }
        k++;
    }
    cout << n;
    cin.get();
    cin.get();
    return 0;
}