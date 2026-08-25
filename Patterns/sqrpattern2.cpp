#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int y=1;
    // int x;
    // for(int i=1; i<=n;i++){
    //     for(int j=y;j<=(n+y-1);j++){
    //         cout<<j<<" ";
    //         x=j;
    //     }
    //     y=x+1;
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<y<<" ";
            y++;
        }
        cout<<endl;
    }
    return 0;
}