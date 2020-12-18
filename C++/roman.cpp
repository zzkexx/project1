#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;
int romannum(string a){
   unordered_map<string, int> m = {{"I",1}, {"IV",3}, {"IX",8},{"V",5},{"X",10},{"XL",30},{"XC",80},{"L",50},{"C",100},{"CD",300},{"CM",800},{"D",500},{"M",1000}};
   unordered_map<string, string> n; 
   n = {{"a","b"},{"c","d"}};
   int r = m[a.substr(0,1)];
   for(int i = 1; i<a.length();i++){
       string two = a.substr(i-1,2);
       string one = a.substr(i,1);
       r = r + m[two] ? m[two] :m[one];
   }
   return r;

    
   
   
}