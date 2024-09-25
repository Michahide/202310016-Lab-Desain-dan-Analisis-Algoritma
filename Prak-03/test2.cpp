#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int input;
	int counter;

cout<<"Program Konversi Bilangan\n\n";
cout<<"Masukkan bilangan desimal : ";
cin>>input;


//Biner
cout << input <<"dalam Biner adalah :";
for(int x=0; x<input;x++){
	counter = input % 2;
	input = input / 2;
	while(input>0){
		cout << counter;
	}
}
cout<<"\n";


//Hexadesimal
/*cout << input <<"dalam Hexadesimal adalah :";
for(int x=0; x<input;x++){
	++counter;
	counter= input % 16;
	input = input / 16;
}
while(counter>0){
	if(counter==15){
		cout<<"F";
	}
	else if(counter==14){
		cout<<"E";
	}
	else if(counter==13){
		cout<<"D";
	}
	else if(counter==12){
		cout<<"C";
	}
	else if(counter==11){
		cout<<"B";
	}
	else if(counter==10){
		cout<<"A";
	}
	else{
		cout<<counter;
	}
	counter;
}
cout<<"\n";


//Oktal
cout << input <<"dalam Oktal adalah :";
for(int x=0; x<input;x++){
	++counter;
	counter = input % 8;
	input = input / 8;
}*/
cin.get();
cin.get();
return 0;
}