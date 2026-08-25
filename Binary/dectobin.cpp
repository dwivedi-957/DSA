#include<iostream>
using namespace std;

int dectobin(int n){
    int a=0,p=1;
    while(n!=0){
        int r=n%2;
        n/=2;
        a+=(r*p);
        p*=10;
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    cout<<dectobin(n);
}