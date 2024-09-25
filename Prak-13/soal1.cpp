#include <iostream>
#include <cmath>
using namespace std;

float rumus (int kecepatan, float sudut){
    float hasil;
    int g = 10;
    hasil = 2 * pow(kecepatan,2) * sin(sudut*3.14159/180) * cos(sudut*3.14159/180) / g;
    
    return hasil;
}

int main(){
    float kecepatan, sudut;
    cout << "===== PROGRAM MENGHITUNG JARAK PELURU =====\n";
    cout << "Masukkan kecepatan peluru = ";
    cin >> kecepatan;
    cout << "Masukkan sudut penembakan = ";
    cin >> sudut;
    cout << "Asumsi percepatan gravitasi = 10 m/s \n";
    cout << "Jarak peluru yang ditembakan adalah = " << rumus(kecepatan, sudut) << " m";
    cin.get();
    cin.get();
    return 0;
}