#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int y=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=y;j++){
    //         cout<<y<<" ";
    //     }
    //     y++;
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}