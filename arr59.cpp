#include <iostream>
#include <string>
using namespace std;

int main () {
    int n , len;
    int set = 0;
    string s;
    

    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        int count[10] = {0};
        cin >> s;
        len = s.length();
        set = 0;
        if (len != 4) 
            cout << "Failure Input" << endl;
        else {
            for(int j = 0 ; j < 4 ; j++) {
                count[s[j] - '0']++;
            }
            for(int j = 0 ; j < 10 ; j++) {
                if(count[j] == 2) {
                    set++;
                } 
            }
            if (set == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    } 
}