#include<iostream>
#include<vector>
using namespace std;

class Chai {
public:
    string teaName;
    int serving;
    // vector<string> ingredients;  // Use vector instead of array

    Chai(){     //************ Default constructor but we can define or modify also 
        
        cout<<"Constructor called : >>"<<endl;
    }
    void chaiDetails() {
    cout << teaName << "\t" << serving << endl;
    //     for (const string& ingredient : ingredients) {
    //         cout << ingredient << "\t"; // Use range-based for loop in C++11 and above
    //     }
    //     cout << endl;
    }
};

int main() {
    Chai c1;
    c1.teaName = "lemon tea";
    c1.serving = 5;
    c1.chaiDetails();
    // c1.ingredients = {"lemon", "good", "red", "green"}; // Using vector initialization
    // c1.chaiDetails(); // No need to pass size here, as it's already part of the ingredients vector
    return 0;
}
