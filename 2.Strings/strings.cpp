#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
	init_code();

string s0;
string s1("Hello");
string s2="Hello world";

string s3(s2);

if(s0.empty()){
  cout<<"empty"<<endl;
}

//Append

s0.append("Ia= am not empty");
cout<<s0<<endl;

s0+=" AND FUL";

cout<<s0<<endl;


cout<<s0.length()<<endl;
///Remove the content

s0.clear();

cout<<s0.length()<<endl;


//COMPARE

string s5="Apple";
string s6="mango";

//return ==0 >0 <0
cout<<s5.compare(s6)<<endl;

//Overloaded operators
s0<s1;
s0>s1;

//FIND SUBSTRINGS

string s="I want to have apple";
int idx=s.find("apple");

cout<<idx<<endl;

//Remove a word

string word="apple";
int len=word.length();

s.erase(idx,len);

cout<<s<<endl;

//Iterate over all char

for(int i=0;i<s.length();i++){
  cout<<s[i]<<" ";
}

//Iterartors

for(auto it=s.begin();it!=s.end();it++ )
  cout<<(*it)<<", ";


//For each loop

//Automayic define data type for what type of value in rhs
for(auto c:s){
  cout<<c<<".";
}


}




