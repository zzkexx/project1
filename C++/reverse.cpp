#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string word = "I Love You";

string rev(string a){
    string b = "";
    for(int i = a.length();i > -1; i--)
    {
        b = b + a[i];
    }
    string res="", tmp="";
    for(int i=0; i < b.length();i++)
    {
        if(b[i]==' ')
        {
            res = " " + tmp + res;
            tmp = "";
        }
        else
        {
            tmp += b[i];
        }
    }
    if(tmp.size()){
        res = tmp + res;
    }
    return res;
};

vector<char> rves(string a){
    vector<char> b;
    for(int i = 0; i < a.length();i++){
        b.push_back(a[i]);
    }
    return b;
}

int main()
{
    string c = rev(word);
    cout << c<< endl;
    vector<char> d = rves(word);
    for(int i = 0; i < d.size();i++){
        cout<<d[d.size()-i-1];
    }
    cout<<""<<endl;
};