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
    if(isprime(n)==true){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}