#include<iostream>
#include<string>
using namespace std;

int main(){
    int i,j, len;
    string str1 = "AB";
    string str2 = "CD";

    len = str1.length();

    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
            cout<<str1[i]<<str2[j]<<endl;
        }
    }
}