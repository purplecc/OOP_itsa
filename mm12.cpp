#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    int dis;
    double pass = 100 - 30*2.54;
    double ans = 0;

    cin >> dis;
    ans = ceil(dis * 100 / pass);
    cout << ans << endl;
}