#include <iostream>  
#include <cmath>  
#include <cstdlib>
using namespace std;  

void findprime(int);
bool isprime(int);
  
int main() {  
    
    int  n;
    cin >> n;
    findprime(n);
    return 0;  
}

void findprime(int n) {
    int max = 0;
    int temp = n , tmp2 = n;
    int digit = 1;
    while(temp /= 10) {
        digit++;
    }
    // cout << digit << endl;
    
    for(int i = digit; i >= 0 ; i--) {
        for(int j = i - 1 ; j >= 0 ; j--) {
            temp = n % (int)pow(10 , i);
            temp /= (int)pow(10 , j);
            if(isprime(temp) && temp > max) {
                max = temp;
            }
        }
        
    }
    if(!max)
        cout << "No prime found" << endl;
    else    
        cout << max << endl; 
}

bool isprime(int n) {
    int i;
    for(i = 2 ; i < n ; i++) {
        if(n % i == 0)
            return false;
    }
    
    return true;
}

