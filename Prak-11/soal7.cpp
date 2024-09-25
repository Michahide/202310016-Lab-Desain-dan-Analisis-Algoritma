#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int row = 4;
    int column = 4;
    int i, j;
    int tahun, kode;
    int A[row][column] = { {26,45,23,30}, {14,11,8,63}, {45,12,64,57}, {22,32,24,20} };

    cout << "Masukkan tahun dari data yang ingin Anda ketahui: \n";
    cout << "[2001 ... 2004]  : ";
    cin >> tahun;

    cout << "Masukkan kode program berdasarkan Mata Kuliah \n sesuai yang Anda inginkan \n";
    cout << "1= Algo by Pascal 2= Algo by C++ 3= Algo by Java 4= Algo by VB :   ";
    cin >> kode;

    
    if( tahun == 2002 && kode == 1){
        cout << "Total kelulusan :  " << A[0][0];
    } else

    if( tahun == 2002 && kode == 2){
        cout << "Total kelulusan :  " << A[1][0];
    } else

    if( tahun == 2002 && kode == 3){
        cout << "Total kelulusan :  " << A[2][0];
    } else

    if( tahun == 2002 && kode == 4){
        cout << "Total kelulusan :  " << A[3][0];
    } else

    if( tahun == 2001 && kode == 1){
        cout << "Total kelulusan :  " << A[0][1];
    } else

    if( tahun == 2001 && kode == 2){
        cout << "Total kelulusan :  " << A[1][1];
    } else

    if( tahun == 2001 && kode == 3){
        cout << "Total kelulusan :  " << A[2][1];
    } else

    if( tahun == 2001 && kode == 4){
        cout << "Total kelulusan :  " << A[3][1];
    } else

    if( tahun == 2003 && kode == 1){
        cout << "Total kelulusan :  " << A[0][2];
    } else

    if( tahun == 2003 && kode == 2){
        cout << "Total kelulusan :  " << A[1][2];
    } else

    if( tahun == 2003 && kode == 3){
        cout << "Total kelulusan :  " << A[2][2];
    } else

    if( tahun == 2003 && kode == 4){
        cout << "Total kelulusan :  " << A[3][2];
    } else

    if( tahun == 2004 && kode == 1){
        cout << "Total kelulusan :  " << A[0][3];
    } else

    if( tahun == 2004 && kode == 2){
        cout << "Total kelulusan :  " << A[1][3];
    } else

    if( tahun == 2004 && kode == 3){
        cout << "Total kelulusan :  " << A[2][3];
    } else

    if( tahun == 2004 && kode == 4){
        cout << "Total kelulusan :  " << A[3][3];
    }
    getch();
    return 0;
    
}