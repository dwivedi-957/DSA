#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,1,2,3,4,5,4,2,8};
    int sz=sizeof(arr)/sizeof(int);
    int n=0;
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            if(arr[i]==arr[j]){
                n++;
            }
        }
        if(n==1){
            cout<<arr[i]<<" ";
        }
        n=0;
    }
    return 0;
}