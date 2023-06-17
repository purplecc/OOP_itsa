#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    double edge;
    double ans = 0;
    cin >> edge;
    ans = round(10 * edge * edge) / 10;
    cout << fixed << setprecision(1) << ans << endl;
}