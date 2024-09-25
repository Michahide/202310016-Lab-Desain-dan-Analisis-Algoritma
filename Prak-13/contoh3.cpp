#include<iostream>

using namespace std;

//mendeklarasikan fungsi untuk proses input array
void input_array(int X[]){
    for(int a=0;a<5;a++){
        cout<<"Masukkan nilai X["<<a<<"] : ";
        cin>>X[a];
    }
}

//fungsi utama 
int main(){
    int X[100]; //elemen maksimal adalah 100
    int jumlah;
    int hasil;
    cout<<"Masukkan banyaknya elemen X yang diinginkan: ";
    cin>>jumlah;
    cout<<endl;

    //memanggil fungsi input_array 
    input_array(X);
    cout<<endl;

    //menampilkan hasil
    cout<<"Hasil penjumlahan semua elemen X yaitu : "<<hasil;
    cout<<endl;
    return 0;
}