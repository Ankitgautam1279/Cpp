// FUNCTION : TYPE 1 (declare + define : together)
// returnType functionName (parameters) {
// //func body
// }
#include<iostream>
using namespace std;
int main(){

//declaration of function
//FUNCTION TYPE 2
void serveChai (int cups);
void serveChai (string cups = "masala chai"); //Masala chai is default, if no value passed, it will be used

serveChai(13); //calling function
serveChai("Lemon Tea"); // FUNCTION OVERLOADING

}

//definition of function
void serveChai(int cups){
    cout << "Serving chai : "<<cups << endl;
}
void serveChai(string cups){
    cout << "Serving chai : "<<cups << endl;
}