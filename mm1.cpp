#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    double up , down , height;
    cin >> up >> down >> height;
    double ans = 0;

    ans = (double)((up + down) * height / 2.0);

    cout << "Trapezoid area:" << fixed << setprecision(1) << ans << endl;
}