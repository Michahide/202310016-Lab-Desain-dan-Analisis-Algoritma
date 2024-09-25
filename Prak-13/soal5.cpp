#include <iostream>
#include <algorithm>
using namespace std;

int banding1 (int x[]){
    for(int i = 1;i < 5; ++i){
       if(x[0] < x[i]){
           x[0] = x[i];
       } 
    }
    return x[0];
}

int banding2 (int x[], int y[]){
    y[0] = banding1(x);
    for(int i = 1;i < 5; ++i){
       if(y[0] < y[i]){
           y[0] = y[i];
       } 
    }
    return y[0];
}

int banding3 (int x[], int y[], int z[]){
    z[0] = banding2(x,y);
    for(int i = 1;i < 5; ++i){
       if(z[0] < z[i]){
           z[0] = z[i];
       } 
    }
    return z[0];
}

bool comp(int a, int b)   
{   
    return (a < b);   
}   


int nilai1[5], nilai2[5], nilai3[5], terbesar;

int main (){
    cout << "==== Fungsi 1 ====\n";
    for(int a = 0; a < 5; a ++){
        cout << "Masukkan nilai [" << a << "] : ";
        cin >> nilai1[a];
    }

    cout << "Nilai terbesar pada fungsi 1 adalah = " << banding1(nilai1) << endl << endl;

    cout << "==== Fungsi 2 ====\n";
    cout << "Nilai [0] : " << banding1(nilai1) << endl;
    for(int a = 1; a < 5; a ++){
        cout << "Masukkan nilai [" << a << "] : ";
        cin >> nilai2[a];
    }

    cout << "Nilai terbesar pada fungsi 2 adalah = " << banding2(nilai1, nilai2) << endl << endl;

    cout << "==== Fungsi 3 ====\n";
    cout << "Nilai [0] : " << banding2(nilai1, nilai2) << endl;
    for(int a = 1; a < 5; a ++){
        cout << "Masukkan nilai [" << a << "] : ";
        cin >> nilai3[a];
    }

    cout << "Nilai terbesar pada fungsi 3 adalah = " << banding3(nilai1, nilai2, nilai3) << endl;
    cout << endl << endl << endl;

    terbesar = max({banding1(nilai1), banding2(nilai1, nilai2), banding3(nilai1, nilai2, nilai3)}, comp);
    cout << "Nilai terbesar dari ketiga fungsi di atas adalah " << terbesar;


    cin.get();
    cin.get();
    return 0;
}

