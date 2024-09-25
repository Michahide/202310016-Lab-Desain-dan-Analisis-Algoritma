#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
    char str1[100];
    cout << "==== PROGRAM UPPER-LOWER CASE KATA ====\n";
    cout << "Masukkan kata: ";
    gets(str1);
    for (int i=0; i < strlen(str1); i++){
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            str1[i] = toupper(str1[i]);
        } else {
            str1[i] = tolower(str1[i]);
            
        }
    }
    cout << "Kata tersebut sesudah diubah = " << str1 << endl;
    getch();
    return 0;

}