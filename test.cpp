#include <iostream>
using namespace std;

bool isPowerofTwo(int n) {
    if (n <= 0)
        return false;
    
    // Count set bits
    int count = 0;
    while (n > 0) {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    
    // If count of set bits is 1, 
    // then n is a power of 2
    return (count == 1);
}

int main() {
    int n;
    cin>>n;
    if (isPowerofTwo(n)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}