#include<iostream>
#include<string>
using namespace std;

class A{
    public:
        void bark(){
            cout<<"Dog is barking"<<endl;
        }
};
class B{
    public:
        void cry(){
        cout<<"is crying"<<endl;
    }
};
class C: public A, public B{
    public:
        string name1 = "germen saphered";
        string name2 = "chhoti";
        void multiple(){
            cout<<name1<<"\t";
            A::bark();
            cout<<name2<<"\t";
            B::cry();
        }
};
int main(){
    C cc;
    cc.multiple();
}