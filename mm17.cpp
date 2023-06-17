#include <iostream>
using namespace std;

int main () {
    int val1 , val2;
    int gcd;

    cin >> val1 >> val2;

    for(int i = 1 ; i <= val1 && i <= val2 ; i++) {
        if (val1 % i == 0 && val2 % i == 0)
            gcd = i;
    }
    cout << gcd << endl;
    return 0;
}