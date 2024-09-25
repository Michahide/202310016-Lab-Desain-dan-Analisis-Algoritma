#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
    char str1[100];
    cout << "==== PROGRAM PEMBALIK KATA ====\n";
    cout << "Masukkan kata: ";
    gets (str1);
    strrev(str1);
    cout << "Kata sesudah diubah = " << str1 << endl;
    getch();
    return 0;

}