#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int j = i;
    int *p = &i;
    int *s = &j;

    cout<<i<<endl<<j<<endl<<*p<<endl<<*s;

}



// #include <iostream>
// using namespace std;

// int main() {
//     // Declare variables to hold the numbers
//     double num1, num2, sum;

//     // Prompt the user for input
//     cout << "Enter the first number: ";
//     cin >> num1;

//     cout << "Enter the second number: ";
//     cin >> num2;

//     // Calculate the sum
//     sum = num1 + num2;

//     // Display the result
//     cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

//     return 0;
// }
