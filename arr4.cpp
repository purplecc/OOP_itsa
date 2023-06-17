#include <iostream>
using namespace std;

int main () {
    int n , m , all;
    cin >> all;
    for(int i = 0 ; i < all ; i++) {
        cin >> n >> m;
        int arr[n+1][m+1];
        for(int j = 1 ; j < n+1 ; j++) {
            for(int k = 1 ; k < m+1 ; k++) {
                cin >> arr[j][k];
            }
        }
        for(int j = 1 ; j < n+1 ; j++) {
            for(int k = 1 ; k < m+1 ; k++) {
                if ((arr[j-1][k] && arr[j+1][k] && arr[j][k-1] && arr[j][k+1]) || arr[j][k] == 0)
                    cout << "_ ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
        if (i != all - 1)
            cout << endl;
    }
}