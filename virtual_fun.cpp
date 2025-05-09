#include<iostream>
using namespace std;

class A{
    public:
        void show(){
            cout<<"class A called";
        }
        virtual void show2(){
            cout<<"class A2 called";
        }
};
class B : public A{
    public:
        void show(){
            cout<<"Class B called";
        }
        void show2(){
            cout<<"class B2 called";
        }
};
int main(){
    A *ptr; //pointer of class A
    B bb; //obj of class B
    ptr = &bb;
    ptr->show();    //class A will be printed bcoz of early or compile-time binding

    ptr->show2(); //class B will be printed bcoz of late or Run-time binding {using virtual keyword}
}