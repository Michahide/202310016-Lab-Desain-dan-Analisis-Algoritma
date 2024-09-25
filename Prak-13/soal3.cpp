#include <iostream>
using namespace std;

int n,i=1;
long int a,b=1,c;
int main (){
    cout<<"======= Deret Fibonacci ======= \n \n";
    cout<<"Masukkan jumlah suku yang diinginkan: ";
    cin>>n;
    

        cout<<"Berikut deret fibonacci nya: \n";
        cout<<b<<" ";
        if (n!=1) {
        while (i!=n) {
            i++;
            c=b+a;
            cout<<c<<" ";
            a=b;
            b=c;
    }
    }
    
    cin.get();
    cin.get();
    return 0;

}