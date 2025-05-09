#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    
    cout<<"enter no of elements";
    cin>>n;
    vector <int> arr3(n);
    for(int i=0; i<n; i++){
        cout<<"Enter your number \t";
        cin>>arr3[i];
    }
    
    int size3 = arr3.size();
    if(size3<2){
        cout<<"Number of Array is less than desired input";
        return 0;
    }
    sort(arr3.begin(), arr3.end());
    
    int largest = arr3[size3-1];
    
    for(int i=arr3.size()-2; i>=0; i--){
        if(arr3[i] < largest){
            cout<<"2nd largest no is :"<<arr3[i];
            return 0;
        }
    }
    cout<<"All the numbers are equal";
    }