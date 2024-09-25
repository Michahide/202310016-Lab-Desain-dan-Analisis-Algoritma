#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
    char str1[] = "Mervin";
    cout << "Nama = " << str1 << endl << endl;
    str1[0]='R';
    cout << "Hasil karakter pertama diubah " << str1 << endl;
    str1[1]='u';
    cout << "Hasil karakter kedua diubah " << str1 << endl;
    str1[2]='s';
    cout << "Hasil karakter ketiga diubah " << str1 << endl;
    str1[3]='w';
    cout << "Hasil karakter empat diubah " << str1 << endl;
    str1[4]='a';
    cout << "Hasil karakter lima diubah " << str1 << endl;
    str1[5]='n';
    cout << "Hasil karakter enam diubah " << str1 << endl;
    getch();
    return 0;

}