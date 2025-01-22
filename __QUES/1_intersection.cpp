#include<iostream>
#include<vector>
#include<set>

using namespace std;

void intersec(vector <int> arr1, vector<int> arr2){
    set<int> s1;
    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i] == arr2[j] ){
                s1.insert(arr2[j]);
            }
        }
    }
    for(int no:s1){
        cout<<no<<"\t";
    } 
}
int main(){
    vector<int> arr1 = {-45, -45, 0, 0, 2};
    vector<int> arr2 = {-50, -45, 0, 0, 5, 7};

    intersec(arr1, arr2);
}