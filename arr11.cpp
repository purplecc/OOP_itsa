#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main () {
    int n;
    int row , col , sub;
    int max = 0;
    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        max = 0;
        cin >> row >> col >> sub;
        int arr[row][col];
        for(int j  = 0 ; j < row ; j++) {
            for(int k = 0 ; k < col ; k++) {
                cin >> arr[j][k];
            }
        }
        for(int j = 0 ; j < row - sub + 1 ; j++) {
            for(int k = 0 ; k < col - sub + 1 ; k++) {
                int sum = 0;
                for(int x = 0 ; x < sub ; x++) {
                    for(int y = 0 ; y < sub ; y++)
                        sum += arr[j + x][k + y];
                }
                if(sum > max)
                    max = sum;
            }
        }
        cout << max << endl;
    }
    
}