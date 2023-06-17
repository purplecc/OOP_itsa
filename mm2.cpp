#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    double down , height;
    cin >> down >> height;
    double ans = 0;

    ans = down * height / 2.0;

    cout << fixed << setprecision(1) << ans << endl;
}