#include<iostream>

using namespace std;
                    //Encapsulation means : Hiding all the info & only necesarry data is available for user
class BankAcc{
    private:
        string accNo;
        double balance;

    public:
        BankAcc(string accNum, double initialBalance){  //default constructor
            accNo = accNum;
            balance = initialBalance;
            cout<<accNo<<" "<<balance<<": Default constructor"<<endl;
        }

    //getter
    double getBalance(){
        cout<<balance<<endl;
        return balance;
    }
    //method to deposite money
    void deposite(double amount){
        if(amount > 0){
            balance = amount + balance;
            cout<<"Deposited balance : "<<amount<<endl;
        }else{
            cout<<"Enter valid amount";
        }
    }
    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance = balance-amount;
            cout<<"Avail bal. after withdrawal : "<<balance<<endl;
        }else{
            cout<<"Invalid withdrawal amount enetered"<<endl;
        }
    }

};

int main(){

    BankAcc b1("A576610", 500);

    b1.deposite(500);
    b1.getBalance();
    b1.withdraw(250);
    b1.getBalance();

    return 0;
}