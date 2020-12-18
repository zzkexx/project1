#include <iostream>
#include <array>
using namespace std;
int n;
void selection(array<int,6> a){
    int min;
    int ind;
    for(int i = 0; i < a.size()-1; i++){
        ind = i;
        for(int j = i+1; j < a.size();j++){
            if(a[j] < a[ind]){ //find min num
                ind = j;    //store index of min num
            }
        }
        min = a[i];
        a[i] = a[ind];
        a[ind] = min;
    }
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    array<int,6> c = {5,3,1,2,7,6};
    selection(c);
    
    cout<<""<<endl;

}