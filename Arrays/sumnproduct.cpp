#include<iostream>
using namespace std;

int sum(int arr[],int sz){
    int sum=0;
    for(int i=0; i<sz; i++){
        sum+=arr[i];
    }
    return sum;
}

int product(int arr[], int sz){
    double pro=1;
    for(int i=0; i<sz; i++){
        pro*=arr[i];
    }
    return pro;
}

int main(){
    int arr[]={2,3,9,10,8,7};
    int sz=sizeof(arr)/sizeof(int);
    cout<<sum(arr,sz)<<endl<<product(arr,sz);
    return 0;
}