#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int arr[] = {2,7,11,15,17};
    int size = 5;
    int target = 32;

    for(int i=0; i<size; i++){
        for(int j=0; j<i; j++){
            if((arr[i]+arr[j]) == target){
                cout<<arr[i]<<endl<<arr[j]<<endl;
                exit(1);
            }
        }
    }
}