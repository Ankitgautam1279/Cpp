#include<iostream>
#include<array>

using namespace std;
int main(){

    int basic[3] = {1,2,3};

    array<int ,4> a = {4,5,6,7};

    int size = a.size();
    // printf("size of array is : ", size);
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<"element at 2nd position \t"<<a.at(2)<<endl;  //element at position (2)
    cout<<"empty or not \t"<<a.empty()<<endl;       //array empty or not
    cout<<"Element at 1st position \t"<<a.front()<<endl; //first element of array
    cout<<"Element at last potion \t"<<a.back()<<endl;  //last element of array

    
}