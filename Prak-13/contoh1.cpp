#include <iostream>
using namespace std;

void tukarnilai (int a, int b){
    int c = a;
    a = b;
    b = c;
    cout << "a = " << a << endl;
    cout << "b = " << b;
}

int main(){
    int a = 6, b = 2;
    cout << "Nilai sebelum tukar\n";
    cout << "a = " << a << endl;
    cout << "b = " << b  << endl;
    cout << "Nilai setelah tukar \n";
    tukarnilai(a,b);
    cin.get();
    return 0;
}