#include <iostream>
#include <array>
using namespace std;


int main(){
array<int,6> a={0,0,1,1,1,0};
array<int,6> b={1,1,1,1,0,1};
array<int,7> c={0,0,0,0,0,0,0};
    // cout<<sizeof(a)<<endl;
    for(int i=c.size()-1; i > 0; i--){
       if(a[i-1]+b[i-1]+c[i] < 2){
           c[i]=a[i-1]+b[i-1]+c[i];
       }else if(a[i-1]+b[i-1]+c[i] < 3){
           c[i]=0;
           c[i-1]=1;
       }else{
           c[i]=1;
           c[i-1]=1;
       }
    }
    for(int i = 0; i < sizeof(c)/sizeof(int);i++){
        cout<<c[i]<<" ";
    }
    cout<<""<<endl;
cout << "The run time is: " <<(double)clock() / CLOCKS_PER_SEC << "s" <<endl;
}