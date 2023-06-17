#include <iostream>
using namespace std;

int main () {
    int value , i = 0;
    int hex[8] = {0};
    int first = 0;
    cin >> value;
    
    for(int i = 7 ; i > -1 ; i--) {
        hex[i] = value % 16;
        value /= 16;
    }

    for(int i = 0 ; i < 8 ; i++) {
        if(first == 0 && hex[i] != 0) {
            first = i;
        }
    }
    
    for(int i = first ; i < 8 ; i++) {
        if (hex[i] >= 10)
            cout << (char)(hex[i] + 55);
        else
            cout << hex[i];
    }
        
    cout << endl;
    return 0;
}
