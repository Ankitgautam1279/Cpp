#include<iostream>
using namespace std;

int main(){

    float NoTea;
    float priceTea;
    float total;
    float finalprice;

    cout<<"Enter the number of tea";
    cin>>NoTea;
    cout<<"Enter the Price of tea";
    cin>>priceTea;

    total = NoTea*priceTea;

    finalprice = (total) + (total/10);

    cout<<"Total price you have to pay after tax is : ₹" <<finalprice <<"\t";

}