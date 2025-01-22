#include<iostream>
#include<string>

using namespace std;

class Chai{
    private:
        string teaName;
        int serving;

    public:
        Chai(string name, int serve): teaName(name), serving(serve){}

        friend bool compareServe(const Chai &chai1, const Chai &chai2); //friend function also k/a free function

        void display()const{
            cout<<teaName<<" -- "<<serving<<endl;
        }
};

bool compareServe(const Chai &chai1, const Chai &chai2){
    return chai1.serving > chai2.serving;
}
int main(){
    Chai masalachai("masala chai", 14);
    Chai ginger("Ginger chai", 8);

    masalachai.display();
    ginger.display();

    if(compareServe(masalachai, ginger)){
        cout<<"Masala chai having more serving";
    }else{
        cout<<"Ginger chai having more serving";
    }
}