#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
        string teaname;
        int serving;
        vector<string> ingredients;

    public:
        Chai(){                 // Default constructor
            teaname = "Unknown tea";
            serving = 1;
           // ingredients = {"Water", "Tea leaves"};
        }

        Chai(string name, int serve){  //parametarized constructor
            teaname = name;
            serving = serve;
          //  ingredients = ingr;
        }
    //getter for tea-name
    string getTeaname(){
        return teaname;
    }
    //setter to set tea-name
    void setTeaname(string name){
        teaname = name;
    }
    //getter for serving
    int getServing(){
        return serving;
    }
    //setter to set serving
    void setServing(int serve){
        serving = serve;
    }
    //getter for ingre (Vector)
    vector<string> getIngredients(){
        return ingredients;
    }
    //setter for ingredientd
    void setingredients(vector<string> ingr){
        ingredients = ingr;
    }

    void displayChaiDetails(){
        cout<<"tea name : "<<teaname<<endl;
        cout<<"serving : "<<serving<<endl;
        // cout<<"Ingredients : "<<endl;
        // for(string ingredient : ingredients){
        //     cout<<ingredient<<" ";
        }
};

int main(){
    Chai chai1;         //object via default constructor
    chai1.displayChaiDetails();     //default constructor called
    Chai chai2("lemon", 2);     //object via parametarized constructor
    chai2.displayChaiDetails(); //parametariez constructor called
    chai1.setTeaname("Setter called");     //value changed in private using setter
    cout<<chai1.getTeaname(); //Returning value from Teaname getter 😁
    chai1.setServing(5);        //value changed in private using getter
    //chai1.getServing();
    chai1.displayChaiDetails();
}  