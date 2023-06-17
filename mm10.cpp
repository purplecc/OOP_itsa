#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    double f;
    double c;

    cin >> c;
    f = c * 9 / 5 + 32;
    f = round(f * 10) / 10;

    cout << fixed << setprecision(1) << f << endl;
}