#include <iostream>
using namespace std;

long int fibonacci(int n);

int main(){

    int n;

    cout<<"==== Fibonacci Rekursif ====\n";
    cout<<"Masukkan banyaknya suku yang ingin ditampilkan: ";
    cin>>n;

    cout<<"Berikut Deret Fibonacci dengan "<<n<<" suku: \n";
    for (int i = 1; i <= n; i++){
    cout << fibonacci(i) << " ";
    }
    cin.get();
    cin.get();
    return 0;
}

long int fibonacci (int n){
    if((n==0)||(n==1)){
        return n;
    } else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}