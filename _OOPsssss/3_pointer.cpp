#include<iostream>
using namespace std;
// function get deleted once it return the value in static memory, but not in dynamic memory
int* prepareChai (int cups){
    int* orders = new int[cups]; //refrence pointer
    for(int i=0; i<cups; i++){
        orders[i] = (i+1)*10;
    }
    return orders;
}
int main(){
    int cups = 5;
    int* chaiOrder = prepareChai(cups);
    for(int i=0; i<cups; i++){
        cout<<"Cups" <<chaiOrder[i] <<endl;
    }

delete[] chaiOrder;
}