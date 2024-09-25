#include <iostream> 
#include <cctype> 
#include <cstring>
#include <conio.h>
using namespace std;

int main()
{
   char str[] ="Petani code!";
    char *hasil;

    // cari kata "code"
    hasil = strstr(str,"code");

    // lalu ubah kata "code" menjad "kode"
    strncpy (hasil, "kode", 4);

    puts(str);
    getch();
    cin.get();
    cin.get();
   return 0;   
}