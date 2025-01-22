#include<iostream>
#include<string>
#include<vector>

using namespace std;

//BASE CLASS OR PARENT CLASS

class Tea{
    protected:
        string teaName;
        int serving;
    public:
        Tea(string name, int serve):teaName(name), serving(serve){
            cout<<"tea constructor called \t"<<teaName<<endl;
        }

    virtual void brew() const{      //Virtual function 
        cout<<"brewing \t"<<teaName<<endl;
    }

    virtual void serve() const{      //Virtual function 
        cout<<"Serving \t"<<serving<<endl;
    }
    virtual ~Tea(){             //virtual destrcutor
        cout<<"Tea destructor called \t"<<teaName<<endl;
    }
    
};

class Greentea: public Tea{
    public:
        Greentea(int serve): Tea("Green tea", serve){
            cout<<"Greent tea constructor called"<<endl;
        }
        void brew() const override{
            cout<<"Brewing \t" <<teaName<<"\t By using Green leaves"<<endl;
        }
        ~Greentea(){
            cout<<"Green tea destructor called"<<endl;
        }
};

class MasalaTea: public Tea{
    public:
        MasalaTea(int serve) : Tea("masala tea", serve){
            cout<<"masala tea constructor called"<<endl;
        }
        void brew() const override final{       //final keyword can't be override
            cout<<"Brewing \t"<<teaName<<"\t with spices"<<endl;
        }
        ~MasalaTea(){
            cout<<"masala tea destructor called"<<endl;
        }
};

            //Can not override 'final' function "MasalaTea::brew" (declared at line 49)

// class SpicymasalaTea: public MasalaTea{
//     public:
//         void brew()const override{
//             cout<<"brewing"<<teaName<<endl;
//         }
// };

int main(){

    Tea* tea1 = new Greentea(2);        //pointer poing base class & then creating class 
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();
    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;
    return 0;
}