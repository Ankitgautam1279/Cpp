#include<iostream>
using namespace std;
int main(){
    int chaiSales[3][4]={
        {100,10,20,30},
        {200,20,30,40},
        {300,30,40,50,},
    };
    for(int i=0; i<3; i++){
        cout<<"\n i'm in row "<<i+1<<"\t";
        for(int j=0; j<4; j++){
            cout<<chaiSales[i][j]<<"\t";
        }
    }
    return 0;
}