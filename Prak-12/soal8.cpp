#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
    char str1[100];
    char str2[100];
    int j = 0;
    cout << "==== PROGRAM PALINDROM KATA ====\n";
    cout << "Masukkan kata: ";
    cin >> str1;
    strcpy(str2, str1);
    strrev(str2);
    
    if (strcmp(str1, str2) == 0){
        cout << "Kata termasuk palindrom";
    } else {
        cout << "Kata tidak termasuk palindrom";
    }
    getch();
    return 0;

}