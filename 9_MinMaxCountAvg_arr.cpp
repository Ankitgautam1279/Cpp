#include<iostream>
using namespace std;

int max(int arr[], int length);
int min(int arr[],int length);
int sum(int arr[], int length);

int main(){
    int i, leng;
    int arr[] = {55,3,3,2,11,6,7,8,10,100};

    leng = sizeof(arr)/sizeof(arr[0]); //To find Length of Array

    cout <<"Length of Array is :" << leng <<endl;
    cout <<"Min value in Array is : "<<min(arr, leng) <<endl;
    cout <<"Max value in Array is : "<<max(arr, leng)<<endl;
    cout <<"Sum of Array is : " <<sum(arr, leng) <<endl;

}

int max(int arr[],int length){
    int i, max = arr[0];
    for(i=1; i<length; i++ ){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[],int length){
    int i, minm = arr[0];
    for(i=1; i<length; i++ ){
        if(minm > arr[i]){
            minm = arr[i];
        }
    }
    return minm;
}

int sum(int arr[], int length){
    int sum = 0, i;
    for(i = 0; i<length; i++)
        sum = sum + arr[i];

    return sum;
}