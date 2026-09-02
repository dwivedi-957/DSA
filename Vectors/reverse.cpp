#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> vec, int sz){
    int st=0,en=sz-1;
    while(st<en){
        swap(vec[st],vec[en]);
        st++;
        en--;
    }
    for(int i:vec){
        cout<<i<<" ";
    }
}

void reversen(vector<int>& vec, int sz){
    int st=0,en=sz-1;
    while(st<en){
        swap(vec[st],vec[en]);
        st++;
        en--;
    }
    for(int i:vec){
        cout<<i<<" ";
    }
}

int main(){
    vector<int> vec={1,2,3,4,5,6};
    int sz= vec.size();
    reverse(vec, sz);
    cout<<endl;
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    reversen(vec, sz);
    cout<<endl;
    for(int i:vec){
        cout<<i<<" ";
    }
    return 0;
}