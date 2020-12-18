#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
double midnum(vector<int> num1, vector<int> num2){
    vector<int> num3;
    for(int i = 0; i < num1.size();i++){
        num3.push_back(num1[i]);
    }
    for(int i = 0; i < num2.size();i++){
        num3.push_back(num2[i]);
    }
    sort(num3.begin(),num3.end());
if(num3.size()%2 != 0){
    return num3[num3.size()/2];
}
else{
    return double(num3[num3.size()/2]+num3[num3.size()/2-1])/2;
}

}

 /*void CreVec(int n){
    cout<< "please enter "<< n << "numbers";
    for(int i= 0;i < n; i++){
        cin >>
    }
}
*/
int main(){
    vector<int> a;
    vector<int> b;
    a.push_back(1);
    a.push_back(2);
    b.push_back(3);
    b.push_back(4);
    cout << midnum(a,b)<<endl;

}