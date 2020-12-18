#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string CreateSt(string a){
    cout<< "enter string"<<endl;
    cin >> a;
    return a;
}

string TurnAr(string a){
    reverse(a.begin(),a.end());
    return a;    
}
string compare(string a,string b){
    string tmp;
    for(int i = 0; i < a.length();i++){
        for(int j=0; j < a.length(); j++ ){
            if(a[j]==b[j]){
                tmp[i]= a[i];
            }
        }
    }
    return tmp;
}
bool isPalindrome(string a){
    string n;
    for(int i=0; i < a.length();i++){
        n[i]=a[a.length()-i];
    }
    if(n == a){
        return true;
    }
    return false;
}
string Print(bool a){
    if(a){
        return "true";
    }else{
        return "false";
    }
}
int main(){
    string a;
    string b;
    string c;
    string n = "abba";
    a = CreateSt(a);
    b = TurnAr(a);
    c = Print(isPalindrome(n)); 
   cout<< a<< endl;
   cout<< b << endl;
   cout<< c << endl;

}