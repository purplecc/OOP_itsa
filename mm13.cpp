#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    int hour , min;
    int h2 , m2;
    int total;
    int ans;

    cin >> hour >> min;
    cin >> h2 >> m2;
    if (m2 - min < 0) {
        total = (h2 - hour - 1) * 60 + (m2 - min + 60);
    } else {
        total = (h2 - hour) * 60 + (m2 - min);
    }

    if (total > 240) {
        ans = 280 + (total - 240) / 30 * 60;
    }
    else if (total > 120) {
        ans = 120 + (total - 120) / 30 * 40;
    }
    else
        ans = total / 30 * 30;


    cout << ans << endl;
}

