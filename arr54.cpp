#include <iostream>
using namespace std;


int main () {
   int count[26] = {0};
   int n;
   char c;
   cin >> n;
   for(int i = 0 ; i < n ; i++) {
        cin >> c;
        count[c - 'a']++;
   } 
   for(int i = 0 ; i < 26 ; i++) {
        if(count[i] != 0) {
            cout << (char)(i + 'a') << " " << count[i] << endl;
        }
   }
}