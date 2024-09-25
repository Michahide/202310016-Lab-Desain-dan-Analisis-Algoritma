#include <iostream>
#include <string>
#include <map>
using namespace std;

enum level {baku, easy, medium, hard};
map<string, level> levels;

void register_levels()
{
    levels["baku"] = baku;
    levels["easy"]   = easy;
    levels["medium"] = medium;
    levels["hard"]   = hard;
}

int main()
{
    register_levels();
    string input;
    cin >> input;
    switch( levels[input] )
    {
    case baku:
        cout << "Pilihan anda salah."; break;
    case easy:
        cout << "easy!"; break;
    case medium:
        cout << "medium!"; break;
    case hard:
        cout << "hard!"; break;
    }
}