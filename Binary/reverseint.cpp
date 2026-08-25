#include<iostream>
using namespace std;

int reverse(int n){
    // int r=0, p=1;
    // while(n>0){
    //     r+=((n%10)*p);
    //     p*=10;
    //     n/=10;
    // }
    // return r;
    
}

int digitsum(int n){
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<reverse(n)<<endl<<digitsum(n);
    return 0;
}