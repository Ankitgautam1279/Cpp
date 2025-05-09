#include<iostream>
using namespace std;

class P{
    public:
    virtual void f(int i){
        cout<<i<<endl;
    }
};
class Q : public P{
    public:
    void f(int i){
        cout<<(2*i)<<endl;
    }
};
int main(){
    P *x = new Q();
    Q *y = new Q();
    P *z = new Q();

    x->f(1);
    y->f(1);
    z->f(1);
}