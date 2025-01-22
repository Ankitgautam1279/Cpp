#include <iostream>
#include<string.h>
using namespace std;

int main(){

    string teaType;
    float priceKG;
    char ratting;

    cout << "Enter tea type \n";
    getline(cin, teaType);
    cout << "price of tea per kg \n";
    cin >> priceKG;
    cout << "It's ratting \n";
    cin>>ratting;

    cout <<"Tea type is :" << teaType << "\n Price per kg = " << priceKG <<" \n Ratting of tea : " << ratting;
 

}