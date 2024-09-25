#include <stdio.h>
#include <conio.h>

void main(){
    char str[] ="Petani code!";
    char * hasil;

    // cari kata "code"
    hasil = strstr(str,"code");

    // lalu ubah kata "code" menjad "kode"
    strncpy (hasil, "kode", 4);

    puts(str);
    getch();
}