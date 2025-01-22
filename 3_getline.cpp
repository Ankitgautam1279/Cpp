#include<iostream>
using namespace std;

int msg(string fav_tea, int numOfTea){
    cout<<"Your choice is very good \t"<<fav_tea<<"\n Number of tea is :" <<numOfTea;
    return 0;
}

int main(){
    string fav_tea;
    int numOfTea;

    cout<<"Enter your favourite tea \t";
    getline(cin, fav_tea);

    cout<<"Enter number of tea \t";
    cin >>numOfTea;

    msg(fav_tea,numOfTea);

}