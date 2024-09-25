#include <iostream>
using namespace std;

int luaslingkaran(int x){
    int result = x * x;
    return result;
}
string comparekata(int x){
    int y = luaslingkaran(x);
    if (y%2 == 0){
        return "Genap";
    } else {
        return "Ganjil";
    }
}
int main(){
    
    for (int i = 1; i < 5; i++){
        cout << "Angka " << luaslingkaran(i) << " adalah " << comparekata(i) << endl;
    }
    cin.get();
    return 0;
}