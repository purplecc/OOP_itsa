#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int min;
    double fee = 0;

    cin >> min;

    if (min >= 1500)
        fee = min * 0.9 * 0.79;
    else if (min > 800)
        fee = min * 0.9 * 0.9;
    else
        fee = min * 0.9;

    cout << fixed  << setprecision(1) << fee << endl;
}