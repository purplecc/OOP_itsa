#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    double dis;
    double ans = 0;
    cin >> dis;
    ans = round(16 * dis) / 10;
    cout << fixed << setprecision(1) << ans << endl;
}