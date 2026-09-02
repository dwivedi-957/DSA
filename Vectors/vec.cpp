#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vector<char> vec1={'a','b','c','d','e','f'};
    vector<int> vec2={1,2,3};
    vector<int> vec3(5,3);
    cout<<vec2[1]<<" "<<vec3[1]<<endl;    
    for(char i : vec1){
        cout<<i<<" ";
    }
    cout<<endl<<vec.size()<<" "<<vec1.size()<<" "<<vec2.size()<<" "<<vec3.size()<<endl;
    vec.push_back(25);
    vec.push_back(32);
    vec.push_back(76);
    cout<<vec.size()<<endl;
    vec.pop_back();
    cout<<vec.size()<<endl;
    for(int i : vec){
        cout<<i<<" ";
    }
    cout<<endl<<vec.front()<<endl<<vec.back()<<endl<<vec.at(0)<<endl;

    vector<int> vec4;
    vec4.push_back (0);
    vec4. push_back (1) ;
    vec4. push_back (2) ;
    cout<<vec4.size()<<endl;//3
    cout<<vec4.capacity()<<endl;//4

    return 0;
}