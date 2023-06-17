#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    int a;
    int ten = 0 , five = 0 , one = 0;
    cin >> a;
    ten = a / 10;
    a %= 10;
    five = a / 5;
    a %= 5;
    one = a;
    cout << "NT10=" << ten << endl;
    cout << "NT5=" << five << endl;
    cout << "NT1=" << one << endl;
}