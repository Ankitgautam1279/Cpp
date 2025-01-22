#include<iostream>
#include<string>
using namespace std;

class Tea{
    public:         //we do not create object of Abstract class
        virtual void prepareINgr() = 0;     //Pure virtual function
        virtual void brew() = 0;           //Pure virtual function
        virtual void serve() = 0;           //Pure virtual function

        void makeTea(){        //we will not allow to declare this function in any other class 
                               //but they all can use it only. k/a ABSTRACT CLASS
            prepareINgr();
            brew();
            serve();
        }
};
//Derived class

class Greentea : public Tea{
    public:
    void prepareINgr() override{        //To re-declare functions we use override keyword
        cout<<"Green leaves & water is ready"<<endl;
    }
    void brew() override {
        cout<<"Green Tea prepared"<<endl;
    }
    void serve() override {
        cout<<"Green Tea Served"<<endl;
    }

};

class Masalatea : public Tea{
    public:
    void prepareINgr() override{
        cout<<"Masala & water is ready"<<endl;
    }
    void brew() override {
        cout<<"Masala Tea prepared"<<endl;
    }
    void serve() override {
        cout<<"masala Tea Served"<<endl;
    }
};

int main(){
    Greentea green;
    Masalatea masala;

    green.makeTea();
    masala.makeTea();
}