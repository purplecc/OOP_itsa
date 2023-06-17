#include <iostream>
using namespace std;

int main () {
    int n;
    double in , out;
    double fee = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        fee = 0;
        cin >> in >> out;
  
        if(in <= 300) {
            in *= 3;
        }
        else if (in <= 500) {
            in *= 3 * 0.9;
           
        }
        else if (in <= 1000) {
            in *= 3 * 0.75;

        }
        else if (in > 1000) {
            in *= 3 * 0.5;
        }

        
        if (out <= 500) {
            out *= 6;
           
        }
        else if (out <= 1000) {
            out *= 6 * 0.9;

        }
        else if (out > 1000) {
            out *= 6 * 0.75;
        }
        fee = in + out;
        cout << (int)fee << endl;
    }
}
