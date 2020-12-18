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
    /*
    while(cin>>p && i < n){
        a.push_back(p);
        i++;
    }
    */
    return a;
}
void PrintV(vector<int> a){
    for(int i = 0; i < a.size();i++){
        cout << a[i] << ",";
    }
    
}
int main(int argc, char *argv[]){
    vector<int> a;
    PrintV(CreateVec(a,4));

}