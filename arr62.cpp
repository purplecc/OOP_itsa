#include <iostream>
#include <string>
using namespace std;

int main () {
    int n , m , p;
    int sum[100][100];
    int mat1[100][100];
    int mat2[100][100];

    for(int i = 0 ; i < 100 ; i++) {
        for(int j = 0 ; j < 100 ; j++) {
            sum[i][j] = 0;
        }
    }
    
    
    cin >> n >> m;
    for(int j = 0 ; j < n ; j++) {
        for(int k = 0 ; k < m ; k++) {
            cin >> mat1[j][k];
        }
    }
    cin >> m >> p;
    for(int j = 0 ; j < m ; j++) {
        for(int k = 0 ; k < p ; k++) {
            cin >> mat2[j][k];
        }
    }

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < p ; j++) {
            int tmp = 0;
            for(int k = 0 ; k < m ; k++)
                tmp += mat1[i][k] * mat2[k][j];
            sum[i][j] = tmp;
        }
    }
    // for(int i = 0 ; i < n ; i++) {
    //     for(int j = 0 ; j < p ; j++) {
    //         cout << sum[i][j];
    //         if(j != p - 1)
    //             cout << " ";
    //         else
    //             cout << endl;
    //     }
    // }
    for(int i = 0; i < n ; i++)
        {
            for(int j = 0; j<p; j++)
            {
                if(j == 0)
                    cout << sum[i][j];
                else
                    cout << " " << sum[i][j];
            }
            cout << endl;
        }
}