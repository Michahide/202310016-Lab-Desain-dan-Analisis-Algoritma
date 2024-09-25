#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){
    int row = 3;
    int column = 3;
    int i, j, k;
    int A[row][column], B[row][column], hasil[row][column];

    cout << "==== Perkalian Matriks Ordo 3x3 ==== \n\n";

    cout << "==== Input Matriks A ====\n";
    for (i = 0; i < row; i ++){
        for (j = 0; j < column; j ++){
            cout << " A ["<< i <<","<< j << "]"<< " = ";
            cin >> A[i][j];
        }
    }

    cout << "\n\n==== Input Matriks B ====\n";
    for (i = 0; i < row; i ++){
        for (j = 0; j < column; j ++){
            cout << "B ["<< i <<","<< j << "]"<< " = ";
            cin >> B[i][j];
        }
    }

    cout << "\n\n==== OUTPUT MATRIKS A ====\n";
    for (i = 0; i < row; i ++){
        for (j = 0; j < column; j ++){
            cout << setw(4) << A[i][j];
        }
        cout << endl;
    }

    cout << "\n\n==== OUTPUT MATRIKS B ====\n";
    for (i = 0; i < row; i ++){
        for (j = 0; j < column; j ++){
            cout << setw(4) << B[i][j];
        }
        cout << endl;
    }

    for (i = 0; i < row; i ++){
        for (j = 0; j < column; j ++){
            hasil[i][j]=0;
            for (k = 0; k < row; k++){
                hasil[i][j] += A[i][k] * B[k][j];
            }
        }
        cout << endl;
    }

    cout << "==== OUTPUT PERKALIAN MATRIKS ====\n";
    for (i = 0; i < row; i ++){
        for (j = 0; j < column; j ++){
            cout << setw(4) << hasil[i][j];
        }
        cout << endl;
    }
    getch();
    return 0;
    
}