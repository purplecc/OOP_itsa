#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    int x , y;
    int flag = 0;

    cin >> x >> y;

    if (x >= 0 && x <= 100)
        flag++;
    if (y >= 0 && y <= 100)
        flag++;
    
    if (flag == 2)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;

}