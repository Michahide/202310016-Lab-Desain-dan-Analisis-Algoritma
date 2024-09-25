#include<conio.h>
#include<iostream>


using namespace std;

int main(){
	char type;
	
	cout << "Nested Repetition\n";	
	cout << "=Mencetak sebuah bintang kotak=\n";
	int p,l;
	cout << "Masukan karakter :";
	cin >> type;
	cout <<"Masukan panjang kotak:";
	cin>> p; // 3
	cout <<"Masukan panjang lebar:";
	cin>> l;
	
	cout << "Type ="<<type<<endl;
	if(type == 'Y'){
		cout << "Oke\n";
	}
	
	for(int a = 1; a<=p; a++){ // loop pertama
 		 for(int b=1; b<=l; b++){ // loop kedua
		 	
		 	if(a == 1 || b==1 || a==p || b==l){
		 		cout << "*";
			 }else{
			 	cout << " ";
			 }
		 }
		 cout << endl;
	}
	
	
	return 0;
}
