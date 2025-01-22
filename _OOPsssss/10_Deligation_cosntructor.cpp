#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
    string teaName;
    int serving;

    //deligaring constructor
    Chai(string name): Chai(name, 1){

    }
    Chai(string name, int serve){       //main constructor
        teaName = name;
        serving = serve;
        cout<<"main constructor called"<<endl;
    }

    void chaiDetails(){
        cout<<"tea name is : "<<teaName<<endl;
        cout<<"Serving : "<<serving<<endl;
    }
};

int main(){
    Chai chai1("lemon", 5);
    chai1.chaiDetails();
}