#include<iostream>
using namespace std;

int search(int n, int sz,int arr[]){
    for(int i=0; i<sz; i++){
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
}

int main(){
    int abc[]={68,89,1,8,876,6,7};
    int sz=sizeof(abc)/sizeof(int);
    int n;
    cin>>n;
    cout<<search(n,sz,abc);
    return 0;
}