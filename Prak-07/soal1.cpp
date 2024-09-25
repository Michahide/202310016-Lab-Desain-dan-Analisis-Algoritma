#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main(){
  int nilai[11] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121};
  int i;
  
  for (i= 0; i < 11; i++){
    cout << "Akar dari " << nilai[i] << " adalah " << sqrt(nilai[i]) << endl; 
  }
  
  getch();
  return 0;
}