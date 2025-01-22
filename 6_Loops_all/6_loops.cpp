#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    int number = 0;
    int sum = 0;

    // cout<<"Enter value of i, j & k \t";
    // cin>> i>>j>>k;

    // while (i<5)
    // {
    //     cout<< i <<"\t While loop is running \n";
    //     i++;
    // }


    // do{
    //     cout<<j <<"\t Do while loop is running \t";
    //     j++;
    // }while(j<5);

    do{
        sum = sum+number;
        cout<<"Enter any positive number \t";
        cin>>number;
    }while(number >0);

    cout<<"Sum of your entered positive number is :\t"<<sum;
    

}