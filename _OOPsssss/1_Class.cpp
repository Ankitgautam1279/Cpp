#include<iostream>
#include<vector> // same like array but support faster random access.

using namespace std;
//By default access is private
class Chai{
    public: //data member or attribute : variable created inside class
        string teaName;
        int serveNo;
        vector<string> ingredients;     //same as array, 
//member function : function/method defined inside a class
        void chaiDetails(){
            cout<<"Tea name : "<<teaName<<endl;
            cout<<"Served number :"<<serveNo<<endl;
            cout<<"ingredients are : "<<endl;
            for(string ingredient : ingredients){   //for loop
                cout<<ingredient<<" ";
            }
    }
    private:
        string name;

};

int main(){
    Chai chai1;
    chai1.teaName = "Lemon tea";
    chai1.serveNo = 2;
    chai1.ingredients = {"water", "teaLeaf", "sugar"};
    chai1.chaiDetails();
    return 0;
}