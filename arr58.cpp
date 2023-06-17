#include <iostream>
#include <string>
using namespace std;

int main () {
    int num;
    cin >> num;

    string str1;
    string str2;
    int rev1[31] = {0} , rev2[31] = {0} , sum[31] = {0};
    int len1 , len2 , carry;
    int start;

    for(int i = 0 ; i < num ; i++) {
        cin >> str1 >> str2;
        
        len1 = str1.length(); len2 = str2.length();
        carry = 0;
        for(int j = 0 ; j < len1 ; j++) 
            rev1[j] = str1[len1 - j - 1] - '0';
        for(int j = 0 ; j < len2 ; j++) 
            rev2[j] = str2[len2 - j - 1] - '0';
        
        for(int j = 0 ; j < 31 ; j++) {
            //cout << rev1[j];
            sum[j] = rev1[j] + rev2[j] + carry;
            if (sum[j] > 9) {
                sum[j] -= 10;
                carry = 1;
            }
            else
                carry = 0;
        }
        for(int j = 30 ; j > -1 ; j--) {
            if (sum[j] != 0) {
                start = j;
                break;
            }
        }
        for(int j = start ; j > -1 ; j--)
            cout << sum[j];
        cout << endl;

        for(int j = 0 ; j < 31 ; j++) {
            sum[j] = 0;
            rev1[j] = 0;
            rev2[j] = 0;
        }
    }   
    
    return 0;
}
