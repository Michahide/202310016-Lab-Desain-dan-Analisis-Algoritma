#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
    char str1[100];
    cout << "==== PROGRAM LOWERCASE KATA ====\n";
    cout << "Masukkan kata: ";
    gets (str1);
    strlwr(str1);
    cout << "Kata tersebut sesudah diubah = " << str1 << endl << endl;
    getch();
    return 0;

}