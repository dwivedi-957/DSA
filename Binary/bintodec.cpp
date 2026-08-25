#include<iostream>
using namespace std;

int bintodec(int n){
    int a=0, p=1;
    while(n!=0){
        int r=n%10;
        a+=(r*p);
        n/=10;
        p*=2;
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    cout<<bintodec(n);
}