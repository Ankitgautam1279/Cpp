#include<iostream>
using namespace std;

class Chai{
    public:
        string* TeaName;
        int serving;
        string inged[5];

        void setArrvalue(string name[]){
            for(int j=0; j<5; j++){
            inged[j]=name[j];
        }
        }
        Chai(string name, int serving){
            TeaName = new string(name);
            cout<<"default constructor"<<endl;
            cout<<"Values received : "<<name<<"\t"<<serving<<endl;
        }
    Chai(const Chai& copied){
        TeaName = new string(*copied.TeaName);
        serving = copied.serving;
        cout<<endl<<"Copy constructor called"<<endl;
    }

//destructor
    ~Chai(){
        delete TeaName;
        cout<<"destructor called : ";
    }
    void chaiDetails(){
        cout<<*TeaName<<endl;
        cout<<serving<<endl;
        for(int i=0; i<5; i++){
            cout<<inged[i]<<"\t";
        }
    }
};

int main(){
    //we can't create object like (chai c1) becoz default constructor required 2 parameter
    string arr[] = {"type1", "type2", "type3", "type4","type5"};
    Chai lemon("Class Created > ", 5); //Class created and value passed to default constructor
    *lemon.TeaName ="new chai";
    lemon.serving=55;
    lemon.setArrvalue(arr);
    lemon.chaiDetails();

    Chai copiedChai = lemon;
    copiedChai.chaiDetails();
}