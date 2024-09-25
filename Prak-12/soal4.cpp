#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
    
    char str1[] = "Halo Aku Mervin";
    char *str2;
    cout << "Nilai str1 sebelum diubah = " << str1 << endl << endl;
    str2 = strstr(str1, "Halo");
    strncpy (str2, "Halo,", 5);
    str2 = strstr(str1, "Aku");
    strncpy (str2, "Aku,", 4);
    cout << "Nilai str1 sesudah diubah = ";
    puts(str1);
    getch();
    return 0;

}