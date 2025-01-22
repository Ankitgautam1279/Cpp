#include<iostream>
#include<string>
using namespace std;

void menu(){
    cout<<"1. for Green tea"<<endl;
    cout<<"2. Black tea"<<endl;
    cout<<"3. Oolong tea"<<endl;
}

int main(){
    int choice;
    menu();
    cout<<"Please select your choice from given menu \t";
    cin>>choice;

    switch (choice)
    {
    case 1:
    cout<<"You have select Green tea \n"<<"You have to pay 2$"<<endl;
    break;
    case 2:
    cout<<"You have selected Black tea \n"<<"You have to pay 3$"<<endl;
    break;
    case 3:
    cout<<"You have selected Oolong tea \n"<<"You have to pay 4$"<<endl;
    break;
    
    default:
    cout<<"Thank you visiting..."<<endl;
        break;
    }

}