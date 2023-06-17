#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector<int> v;
    int ppl;
   
    cin >> ppl;
    for(int i = 0 ; i < ppl ; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for(int i = 0 ; i < ppl ; i++) {
        cout << v[i] << endl;
    }
}