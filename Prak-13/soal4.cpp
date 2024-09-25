#include <iostream>
using namespace std;

int main(){
    int row = 4;
    int column = 4;
    int i, j;
    string nama;
    int pil;
    char ipk;
    float total, hasil, temp, total_sks, mutu;
    int tabel[row][column] = { {82, 78, 25, 80}, {75, 76, 50, 63}, {80, 62, 74, 57}, {77, 80, 84, 61} };

    cout << "==== List Nama Mahasiswa ====\n";
    cout << "1. Fitri Adilah\n";
    cout << "2. Deni Akbar\n";
    cout << "3. Tono Abraham\n";
    cout << "4. M Fahmi Fadilah\n\n";
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);

    total_sks = 3 + 3 + 2 +2;

    //Fitri Adilah
    if (nama == "Fitri Adilah" || nama == "Fitri adilah" || nama == "fitri adilah" || nama == "fitri Adilah" || nama == "FITRI ADILAH" || nama == "Fitri" || nama == "fitri" || nama == "FITRI" || nama == "1"){
        temp = 0;
        for (i = 0; i < row; i ++){
            if(i == 0){
                mutu = tabel[i][0] * 3;
            } else if (i == 1){
                mutu = tabel[i][0] * 3;
            } else if (i == 2){
                mutu = tabel[i][0] * 2;
            } else if (i == 3){
                mutu = tabel[i][0] * 2;
            }
            hasil = temp + mutu;
            temp = hasil;
        }
        total = hasil/total_sks;
        if (total <= 100 && total >= 90) {
            ipk = 'A';
        } else if (total < 90 && total >= 80){
            ipk = 'B';
        } else if (total < 80 && total >= 70){
            ipk = 'C';
        } else if (total < 70 && total >= 50){
            ipk = 'D';
        } else {
            ipk = 'E';
        }
        
        cout << endl << endl;
        cout << "==== Hasil Nilai Semester ====\n";
        cout << "Web Programming (3 SKS) = " << tabel[0][0] << endl;
        cout << "Basis Data I (3 SKS) = " << tabel[1][0] << endl;
        cout << "Aljabar I (2 SKS) = " << tabel[2][0] << endl;
        cout << "Bahasa Inggris (2 SKS) = " << tabel[3][0] << endl << endl;
        cout << "Total IPK = " << total << endl;
        cout << "IPK Alfabet = " << ipk << endl;
    }

    //Deni Akbar
    else if (nama == "Deni Akbar" || nama == "Deni akbar" || nama == "deni Akbar" || nama == "deni akbar" || nama == "DENI AKBAR" || nama == "Deni" || nama == "deni" || nama == "DENI" || nama == "2"){
        temp = 0;
        for (i = 0; i < row; i ++){
            if(i == 0){
                mutu = tabel[i][1] * 3;
            } else if (i == 1){
                mutu = tabel[i][1] * 3;
            } else if (i == 2){
                mutu = tabel[i][1] * 2;
            } else if (i == 3){
                mutu = tabel[i][1] * 2;
            }
            hasil = temp + mutu;
            temp = hasil;
        }
        total = hasil/total_sks;
        if (total <= 100 && total >= 90) {
            ipk = 'A';
        } else if (total < 90 && total >= 80){
            ipk = 'B';
        } else if (total < 80 && total >= 70){
            ipk = 'C';
        } else if (total < 70 && total >= 50){
            ipk = 'D';
        } else {
            ipk = 'E';
        }

        cout << endl << endl;
        cout << "==== Hasil Nilai Semester ====\n";
        cout << "Web Programming (3 SKS) = " << tabel[0][1] << endl;
        cout << "Basis Data I (3 SKS) = " << tabel[1][1] << endl;
        cout << "Aljabar I (2 SKS) = " << tabel[2][1] << endl;
        cout << "Bahasa Inggris (2 SKS) = " << tabel[3][1] << endl << endl;
        cout << "Total IPK = " << total << endl;
        cout << "IPK Alfabet = " << ipk << endl;
    }

    //Tono Abraham
    else if (nama == "Tono Abraham" || nama == "Tono abraham" || nama == "tono Abraham" || nama == "tono abraham" || nama == "TONO ABRAHAM" || nama == "Tono" || nama == "tono" || nama == "TONO"  || nama == "3"){
        temp = 0;
        for (i = 0; i < row; i ++){
            if(i == 0){
                mutu = tabel[i][2] * 3;
            } else if (i == 1){
                mutu = tabel[i][2] * 3;
            } else if (i == 2){
                mutu = tabel[i][2] * 2;
            } else if (i == 3){
                mutu = tabel[i][2] * 2;
            }
            hasil = temp + mutu;
            temp = hasil;
        }
        total = hasil/total_sks;
        if (total <= 100 && total >= 90) {
            ipk = 'A';
        } else if (total < 90 && total >= 80){
            ipk = 'B';
        } else if (total < 80 && total >= 70){
            ipk = 'C';
        } else if (total < 70 && total >= 50){
            ipk = 'D';
        } else {
            ipk = 'E';
        }

        cout << endl << endl;
        cout << "==== Hasil Nilai Semester ====\n";
        cout << "Web Programming (3 SKS) = " << tabel[0][2] << endl;
        cout << "Basis Data I (3 SKS) = " << tabel[1][2] << endl;
        cout << "Aljabar I (2 SKS) = " << tabel[2][2] << endl;
        cout << "Bahasa Inggris (2 SKS) = " << tabel[3][2] << endl << endl;
        cout << "Total IPK = " << total << endl;
        cout << "IPK Alfabet = " << ipk << endl;
    }

    //M Fahmi Fadilah
    else if (nama == "M Fahmi Fadilah" || nama == "M Fahmi fadilah" || nama == "M fahmi fadilah" || nama == "m fahmi fadilah" || nama == "m Fahmi fadilah" || nama == "m fahmi Fadilah" || nama == "M FAHMI FADILAH"  || nama == "Fahmi" || nama == "fahmi" || nama == "FAHMI" || nama == "4"){
        temp = 0;
        for (i = 0; i < row; i ++){
            if(i == 0){
                mutu = tabel[i][3] * 3;
            } else if (i == 1){
                mutu = tabel[i][3] * 3;
            } else if (i == 2){
                mutu = tabel[i][3] * 2;
            } else if (i == 3){
                mutu = tabel[i][3] * 2;
            }
            hasil = temp + mutu;
            temp = hasil;
        }
        total = hasil/total_sks;
        if (total <= 100 && total >= 90) {
            ipk = 'A';
        } else if (total < 90 && total >= 80){
            ipk = 'B';
        } else if (total < 80 && total >= 70){
            ipk = 'C';
        } else if (total < 70 && total >= 50){
            ipk = 'D';
        } else {
            ipk = 'E';
        }

        cout << endl << endl;
        cout << "==== Hasil Nilai Semester ====\n";
        cout << "Web Programming (3 SKS) = " << tabel[0][3] << endl;
        cout << "Basis Data I (3 SKS) = " << tabel[1][3] << endl;
        cout << "Aljabar I (2 SKS) = " << tabel[2][3] << endl;
        cout << "Bahasa Inggris (2 SKS) = " << tabel[3][3] << endl << endl;
        cout << "Total IPK = " << total << endl;
        cout << "IPK Alfabet = " << ipk << endl;
    } else {
        cout << "Anda memberikan input yang salah.";
    }
    
    
    cin.get();
    cin.get();
    return 0;
    
}