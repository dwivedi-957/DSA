#include<iostream>
using namespace std;

int main(){
    int arr[]={32,54,67,12,76,89,92,43};
    int sz=sizeof(arr)/sizeof(int);
    int min=INT_MAX;
    int max=INT_MIN;
    int n,m;
    for(int i=0; i<sz; i++){
        if(arr[i]<min){
            min=arr[i];
            n=i;
        }
        if(arr[i]>max){
            max=arr[i];
            m=i;
        }
    }
    cout<<max<<"-"<<n<<" "<<min<<"-"<<m<<endl;
    swap(arr[n],arr[m]);
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}