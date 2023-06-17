#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main () {
    vector<int> arr;
    int a;
    char c;
    int max = 0 , min = 0 , len;
    cin >> a;
    arr.push_back(a);
    while(cin >> c >> a) {
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());
    len = arr.size();
    for(int i = 0 ; i < len ; i++) {
        max += arr[i] * (int)pow(10 , i);
    }
    //cout << max << endl;    
  
    for(int i = 0 ; i < len ; i++) {
        min += arr[i] * (int)pow(10 , len - i - 1);
    }
    //cout << min << endl;
    cout << max - min << endl;
}