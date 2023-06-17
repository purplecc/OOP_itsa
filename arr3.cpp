#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main () {
    vector<int> v;
    int temp;
    long long int sum = 0;
    string line;
    getline(cin, line);
    istringstream iss(line);
    while(iss >> temp) {
        v.push_back(temp);
    }
    for(int i = 0 ; i < v.size() ; i++) {
        sum += v[i] * v[i] * v[i];
    }   
    cout << sum << endl;
    return 0;
}
