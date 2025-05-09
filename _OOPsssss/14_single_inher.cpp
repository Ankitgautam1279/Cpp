#include<iostream>
using namespace std;

class A{
    public:
    int pub = 01;
    protected:
    int protec = 02;
    private:
    int priv = 03;

    public:
        void pub2(){
            cout<<"I'm from class A"<<endl;
        }
};

class B:public A{
    public:
        int pub = 20;
    void showAge(){
        cout<<"Base class age"<<A::pub<<endl;
        cout<<"Using protected class"<<A::protec<<endl;
        cout<<"Derived class age"<<pub<<endl;
    }
};

int main(){
    B bb;   //obj bb of class B

    bb.showAge();
}