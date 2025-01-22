#include<iostream>
using namespace std;
int main(){
    int i, size;
    int arr[size];

    cout<<"Enter size of array" <<endl;
    cin>>size;
    for (i=0; i<size; i++){
        cout<<"\t Enter values : ";
        cin>>arr[i];

    }
    cout<<"Your array is : ";
    for(i =0; i<size; i++)
        cout<<arr[i]<<endl;
}