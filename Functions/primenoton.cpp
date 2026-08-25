#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2; i<n; i++){
        if(n%2==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
        if(isprime(i)==true){
            cout<<i<<" ";
        }
    }
    return 0;
}