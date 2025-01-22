#include<iostream>

using namespace std;

namespace mychai{ //My own namespace
    void display(){
        cout<<"This is my namespace \n";
    }
}

int main(){
    mychai::display();

    cout<<"I have craeted my own Namespace";
}