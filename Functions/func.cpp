#include<iostream>
using namespace std;

int nsum(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}

int fact(int n){
    int fac=1;
    for(int i=1; i<=n; i++){
        fac*=i;
    }
    return fac;
}

int main(){
    int n;
    cin>>n;
    cout<<nsum(n)<<endl<<fact(n);
}