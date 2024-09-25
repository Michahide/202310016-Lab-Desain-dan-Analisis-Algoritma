#include <iostream>
#include <math.h>
using namespace std;
int main() {
int Luas, Sisi=13;
cout <<"======================================== \n ";
cout << "Program Menghitung Luas Kubus \n " ;
cout <<"======================================== \n ";
cout << "Diketahui \n Panjang Sisi Kubus = "<< Sisi <<endl;
Luas = 6*pow(Sisi,2);
cout << "Luas kubus adalah " << Luas << endl;
return 0 ;
}