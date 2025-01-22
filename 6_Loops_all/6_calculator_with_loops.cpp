#include<iostream>
using namespace std;

int main(){

    char choice = 'q';
    int a,b,c;
    do{
        cout<<"\n Enter your choice"<<endl;
        cout<<"1. for addition"<<endl;
        cout<<"2. for minus"<<endl;
        cout<<"3. for multiply"<<endl;
        cout<<"4. for divide"<<endl;

        cout<<"Q for quit"<<endl;
        cin>>choice;

        if(choice == '1'){
            cout<<"Enter two number for addition"<<endl;
            cin>>a>>b;
            cout<<"Sum of entered number is :"<< (a+b) <<endl;
        }else if(choice =='2'){
            cout<<"Enter two number for substraction"<<endl;
            cin>>a>>b;
            cout<<"Minus of entered number is :"<< (a-b) <<endl;
            }else if(choice =='3'){

                cout<<"Enter two number for multiplication"<<endl;
                cin>>a>>b;
                cout<<"Miltiply of entered number is :"<< (a*b) <<endl;
            }else if(choice =='4'){
                cout<<"enter two number to divide"<<endl;
                cin>>a>>b;
                cout<<"divide of two entereed number is : "<< (a/b) <<endl;
            }

    }while(choice != 'q' && 'Q');
    cout<<"Thank You for Using calculator";
}
