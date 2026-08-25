#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>=97&&ch<=122){
        cout<<"lowercase";
    }
    else{
        cout<<"UPPERCASE";
    }
    // if(ch>='a'&&ch<='z'){
    //     cout<<"lowercase\n";
    // }
    // else{
    //     cout<<"UPPERCASE\n";
    // }
    return 0;
}