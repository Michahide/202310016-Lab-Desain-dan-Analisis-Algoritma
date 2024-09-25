#include <iostream>
#include <string>
using namespace std;

int input, counter;
string c;

void dectobin(int input)
    {
    cout << input <<" dalam Biner adalah ";
    for(int x=0; x<input;)
    {
    ++counter;
    c[counter] = input % 2;
    input = input / 2;
    }
    while(counter>0)
    {
    cout << c[counter];
    --counter;
    }
    cout<<"\n";
    }
    void dectohex(int input)
    {
    cout << input <<" dalam Hexadesimal adalah ";
    for(int x=0; x<input;)
    {
    ++counter;
    c[counter] = input % 16;
    input = input / 16;
    }
    while(counter>0)
    {
    if(c[counter]==15)
    {
    cout<<"F";
    }
    else if(c[counter]==14)
    {
    cout<<"E";
    }
else if(c[counter]==13)
{
cout<<"D";
}
else if(c[counter]==12)
{
cout<<"C";
}
else if(c[counter]==11)
{
cout<<"B";
}
else if(c[counter]==10)
{
cout<<"A";
}
else
{
cout<<c[counter];
}
--counter;
}
cout<<"\n";
}
void dectooc(int input)
{
cout << input <<" dalam Oktal adalah ";
for(int x=0; x<input;)
{
++counter;
c[counter] = input % 8;
input = input / 8;
}
while(counter>0)
{
cout << c[counter];
--counter;
}
cout<<"\n";
}

int main(){
    cout<<"Program Konversi Bilangan\n\n";
    cout<<"Masukkan bilangan desimal : ";
    cin>>input;
    dectohex(input);
    dectobin(input);
    dectooc(input);
    cin.get();
    cin.get();
    return 0;
}
