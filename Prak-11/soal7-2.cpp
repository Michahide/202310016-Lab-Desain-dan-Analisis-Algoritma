#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int row = 4;
    int column = 4;
    int i, j;
    int tahun, kode;
    int A[row][column] = { {45,26,23,30}, {11,14,8,63}, {12,45,64,57}, {32,22,24,20} };

    cout << "Masukkan tahun dari data yang ingin Anda ketahui: \n";
    cout << "[2001 ... 2004]  : ";
    cin >> tahun;

    cout << "Masukkan kode program berdasarkan Mata Kuliah \n sesuai yang Anda inginkan \n";
    cout << "1= Algo by Pascal 2= Algo by C++ 3= Algo by Java 4= Algo by VB :   ";
    cin >> kode;

    
    if( kode < 5 && (tahun <= 2004&&tahun >= 2001)){
        cout <<  A[tahun-2001][kode-1];
    } else {
        cout << "Input Anda salah.";
    }
    getch();
    return 0;
    
}