#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    int i = 0;
    vector <int> a;
    while (i < 10){
        int b;
        cin >> b;
        if(cin.fail()){
            cout<<"please enter num"<<endl;
            cout<<""<<endl;
            cin.clear();
            i = 10;
        }
        else{
        a.push_back(b);
        }
    i = i+1;
    };
    int sum = 0;
    cout << "vector is: "<<endl;
    for(int i = 0;i < a.size();i++){
        cout<<a[i]<<" ";
        sum += a[i];
    }
    cout<<" "<<endl;
    cout<<"avg = "<<sum/a.size()<<endl;
    int count = 0;
    for(int i = 0; i<a.size();i++){
        if(a[i]> sum/a.size()){
            count++;
        }
    }
    cout<< count <<" larger than mean"<<endl;
};