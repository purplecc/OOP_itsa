#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    int sec;
    int day = 0 , hour = 0 , min = 0;

    cin >> sec;
    day = sec / 86400;
    sec %= 86400;
    hour = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;

    cout << day << " days" << endl;
    cout << hour << " hours" << endl;
    cout << min << " minutes" << endl;
    cout << sec << " seconds" << endl;
}

