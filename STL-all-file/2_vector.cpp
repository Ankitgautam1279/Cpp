// when size get full,, it automatically creates another vector with double of it's size & copy all data to it
// it is dynamic in nature

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;   //full capacity of vector
    int a = v.size();                    //size of vector
    cout<<"Size of vector is : "<<a<<endl;


}