#include<iostream>
using namespace std;

int main(){
    int a[12]={35,96,35,23,82,78,21};
    int b[5]={12,35,77,26,89};
    int n=7;
    for(int i=0; i<5; i++){
        a[n]=b[i];
        n++;
    }
    for(int i=0; i<12; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}