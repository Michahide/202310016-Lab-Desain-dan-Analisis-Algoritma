#include <iostream>
using namespace std;

int main(){
	
	int jumlah, bil;
jumlah = 1;
cout << "Masukkan panjang deret: ";
cin >> bil;
cout << "\n\t==Mencetak bilangan faktorial==\n";
for (int x = bil; x >= 1; x--){
  	if (x > 1){
     cout << x << " * ";
	}else{
     cout << x << " = ";
    }
    jumlah = jumlah * x;
}

cout << jumlah;
return 0;
}
