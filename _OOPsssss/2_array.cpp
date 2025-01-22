#include<iostream>
using namespace std;

    int ChaiServed(int chai[], int size){ //taking array as input
        int total = 0;
        for(int i=0; i<size; i++){
            total += chai[i];
        }
        return total;
    }
int main(){
    int i =0;
    int chaiTemp[5] = {50,35,40,35,80};
    int funChai[7] = {12,24,45,56,76,45,34};
    cout <<"Chai temperature is : "<<endl;
    for(int i=0; i<5; i++){
        cout<<chaiTemp[i] <<"Degree"<<endl;
    }
    int hold = ChaiServed(funChai, 7); //saving output returned from ChaiSaved function in "hold"
    cout<<"Total returned from function is : "<<hold;
}