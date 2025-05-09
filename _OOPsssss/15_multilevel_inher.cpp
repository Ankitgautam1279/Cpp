#include<iostream>
using namespace std;

class A{
    public:
        int publ = 100;
};
class B : public A{
    public:
        int publ = 200;
        void show(){
            cout<<"inherited from class A : "<<A::publ<<endl;
            cout<<publ<<endl;
        } 
};
class C : public B{
    private:
        int publ = 300;
    public:
        void show2(){
            cout<<A::publ<<endl;
            cout<<B::A::publ<<endl;
            cout<<B::publ<<endl;
            // cout<<publ<<endl; // Private 
        }
        void setpubl(int a){
            publ = a;
        }
        void getpubl(){
            cout<<publ<<endl;
        }
};
int main(){
    // B bb;
    // cout<<bb.publ;
    // bb.show();
    C cc;
    // cout<<cc.publ<<endl;   //error bcoz it's private
    // cc.show2();
    // cc.setpubl(500);
    cc.getpubl();
}