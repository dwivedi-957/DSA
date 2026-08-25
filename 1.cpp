#include<iostream>
using namespace std;

//You are given an interger n, find the absolute value of the integer n.

// int absolute(int n) {
//     int a;
//     if(n<0){
//         a=(-1*n);
//     }
//     else{
//         a=n;
//     }
//     return a;
// }
// int main(){
//     int a;
//     cin>>a;
//     cout<<absolute(a);
// }

int main(){
    int n;
    cin>>n;
    cout<<abs(n);
    return 0;
}