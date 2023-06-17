#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main () {
    vector<int> v;
    int temp;
    string line;
    getline(cin, line);
    istringstream iss(line);
    while(iss >> temp) {
        v.push_back(temp);
    }
    for(vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
        cout << *it;
        if(it != v.rend() - 1) cout << " ";
    }
    cout << endl;
}