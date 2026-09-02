#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> vec, int sz, int n){
    for(int i=0; i<sz; i++){
        if(vec[i]==n){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> vec={1,2,3,4,5,6};
    int sz= vec.size();
    int n;
    cin>>n;
    cout<<search(vec, sz, n);
    return 0;
}