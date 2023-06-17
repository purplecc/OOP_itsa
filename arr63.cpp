#include <iostream>
#include <string>
using namespace std;

int main () {
    int n , m;
    int sum[100][100];

    for(int i = 0 ; i < 100 ; i++) {
        for(int j = 0 ; j < 100 ; j++) {
            sum[i][j] = 0;
        }
    }
    
    for(int i = 0 ; i < 2 ; i++) {
        cin >> n >> m;
        for(int j = 0 ; j < n ; j++) {
            for(int k = 0 ; k < m ; k++) {
                int tmp;
                cin >> tmp;
                sum[j][k] += tmp;
            }
            
        }
    }
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cout << sum[i][j];
            if(j != m - 1)
                cout << " ";
            else
                cout << endl;
        }
    }
}