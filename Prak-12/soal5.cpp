#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
    char str1[100];
    cout << "==== PROGRAM PENGHITUNG PANJANG KATA ====\n";
    cout << "Masukkan kata: ";
    gets (str1);
    cout << "Panjang kata adalah = " << strlen(str1) << " huruf";
    getch();
    return 0;

}