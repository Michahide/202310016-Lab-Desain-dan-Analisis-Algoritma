#include <iostream>
using namespace std;
int main() {
int Total, Biaya=12500, panjang=3, lebar= 4;
cout <<"======================================== \n ";
cout << "Program Menghitung Biaya Kabel RJ45 \n " ;
cout <<"======================================== \n ";
cout << "Diketahui \n Biaya = Rp "<< Biaya << "/meter, panjang = " <<panjang << " meter, lebar = " << lebar <<" meter"<<endl;
Total = Biaya*((2*panjang)+(2*lebar));
cout << "Maka total pembayaran adalah Rp " << Total << endl;
return 0 ;
}