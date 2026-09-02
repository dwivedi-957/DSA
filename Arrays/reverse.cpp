#include<iostream>
using namespace std;

int main(){
    int arr[]={21,54,87,34,47,93,70};
    int sz=sizeof(arr)/sizeof(int);
    int st=0, en=sz-1;
    while(st<en){
        swap(arr[st],arr[en]);
        st++;
        en--;
    }
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}