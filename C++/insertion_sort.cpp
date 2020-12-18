#include <iostream>
#include <stdio.h>
#include <array>
using namespace std;

void insertion(array<int,6> a){
    for(int j = 1;j< a.size();j++){
        int k=a[j];
        int i = j-1;
        while(i>=0 && a[i]<k){
            a[i+1] = a[i];
            i = i - 1;
        }
        a[i+1] = k;
    }
    for(int m = 0;m < a.size(); m++){
        cout<<" "<<a[m];
    }
}

int main(){
    cout<<"myarray:";
    array<int,6> myarray={31,41,59,26,41,58};
    insertion(myarray);
    cout<<""<<endl;
    for(int i = 0; i < myarray.size();i++){
    cout<<" "<<myarray[i];
    }
    cout<<""<<endl;
cout << "The run time is: " <<(double)clock() / CLOCKS_PER_SEC << "s" <<endl;
}