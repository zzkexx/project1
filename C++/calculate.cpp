#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
vector<int> CreateVec(vector<int> a,int n){
    int i = 0;
    int p;
    cout<<"please enter "<< n << " numbers: "<<endl;
    for(int i=0; i < n;i++){
        cin >> p;
        a.push_back(p);
    }

    return a;
}
int main(){
    vector<int> a;
    vector<int> b;
    b = CreateVec(a,4);
    for(int i = 0; i < b.size();i++){
        cout<< (b[i]) << endl;
    }
}