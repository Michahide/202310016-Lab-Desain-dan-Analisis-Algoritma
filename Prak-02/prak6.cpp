#include<conio.h> 
#include<iostream> 
using namespace std; 
int main(){ 
    char Jenis_Kelamin;
    float Berat_Badan, Tinggi, BMI;
    cout<<"Masukkan jenis kelamin (P/W): "; 
    cin>>Jenis_Kelamin;
    cout<<"Masukkan berat badan (kg): "; 
    cin>>Berat_Badan;
    cout<<"Masukkan tinggi (cm): "; 
    cin>>Tinggi;  
    if (Jenis_Kelamin=='P'||Jenis_Kelamin=='p'){
        BMI=(Tinggi-100)-((Tinggi-100)*0.1);
        if(BMI>63){
            cout<<"Untuk ukuran BMI Pria, anda termasuk normal.";
        } else {
            cout<<"Untuk ukuran BMI Pria, anda termasuk kekurangan gizi.";
        }
    } else if(Jenis_Kelamin=='W'||Jenis_Kelamin=='w') {
        BMI=(Tinggi-100)-((Tinggi-100)*0.15);
        if(BMI>50){
            cout<<"Untuk ukuran BMI Wanita, anda termasuk normal.";
        } else {
            cout<<"Untuk ukuran BMI Wanita, anda termasuk kekurangan gizi.";
        }
    }
    getch(); 
    return 0; 
}

