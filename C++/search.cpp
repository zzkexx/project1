#include <iostream>
#include <array>
using namespace std;
string search(array<int,6> a, int v){
    bool j = false;
    string num;
    for(int i=0; i < a.size(); i++){
        if(a[i]== v){
            j = true;
            num = to_string(i);
        }
    }
    if(j){
        return num;
    }else{
        return "NIL";
    }
    
}

int main(){
    array<int,6> a={1,3,4,6,23,4}; 
    cout<<"v = "<<search(a,10)<<endl;
    cout << "The run time is: " <<(double)clock() / CLOCKS_PER_SEC << "s" <<endl;
}