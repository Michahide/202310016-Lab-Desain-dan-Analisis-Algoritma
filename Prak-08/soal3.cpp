#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    long i;
    string value[5] = {"21","5","A","36","B"};

    cout << "=OUTPUT=\n";
    for(i = 0; i < 5; i ++){
        cout << "Value ["<< i <<"] : "<< value[i] << endl;
    }

    getch();
    return 0;
    
}