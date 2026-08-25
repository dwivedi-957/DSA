#include<iostream>
using namespace std;

int fact(int n){
    int fac=1;
    for(int i=1; i<=n; i++){
        fac*=i;
    }
    return fac;
}

int ncr(int n, int r){
    int ncr;
    ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int main(){
    int n,r;
    cin>>n>>r;
    if(n>r){
        cout<<ncr(n,r);
    }
    else{
        cout<<"Invalid Values";
    }
    return 0;
}