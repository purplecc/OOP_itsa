#include <iostream>
using namespace std;

int main () {
    int value , i = 0;
    int binary[8] = {0};

    cin >> value;
    if (value < 0)
        value += 256;

    for(int i = 7 ; i > -1 ; i--) {
        binary[i] = value % 2;
        value /= 2;
    }

    for(int i = 0 ; i < 8 ; i++)
        cout << binary[i];
    cout << endl;
    return 0;
}
