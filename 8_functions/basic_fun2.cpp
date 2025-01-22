#include<iostream>
using namespace std;

void Chai(int &cups);
void pourChai(int cups){
    cups = cups + 5;
    cout<<"Poured cups" <<cups <<endl;
}
int main(){
    
    int chaiCups = 25;
    int Newtea = 5;
    pourChai(chaiCups); //  CALL BY REFRENCE... Copy of value passed, not exact value
    cout<<"Total cups : "<<chaiCups<<endl;
    Chai(Newtea);
    cout<<"total chai : "<<Newtea<<endl; // CALL BY Value... value passed in fun, exact value will be updated
    return 0;
}


void Chai(int &tea){
    tea = tea + 5;
    cout<<"Poured cups" <<tea <<endl;
}