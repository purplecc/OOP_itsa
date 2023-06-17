#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    int x , y;
    int count = 0;

    cin >> x >> y;

    count = x*x + y*y;
    
    
    if (count <= 10000)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;

}