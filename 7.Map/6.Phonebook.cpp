#include<iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <unordered_map>  
#include <queue>
#include<cstdio>
#include <cstring>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
//UNORDERED MAP
//SEPRATE CHAINING
//FIND HASH INDEX AND STORE KEY VALUE
//HASH TABLE
//O(1) Time
//LF>0.75-->REHASHING
//NOT ORDERED



int main(){
	init_code();
 unordered_map<string,vector<string>>Phonebook;
 Phonebook["Vivek"].push_back("9110");
  Phonebook["Vivek"].push_back("9999");
    Phonebook["Vivek"].push_back("4856");
     Phonebook["Vivek"].push_back("9110");
      Phonebook["Vivek"].push_back("6666");


Phonebook["Singh"].push_back("85444");
Phonebook["Singh"].push_back("9854");
Phonebook["Singh"].push_back("2588");
Phonebook["Singh"].push_back("5487");
Phonebook["Singh"].push_back("698547");


//Traverse map then vector
for(auto p:Phonebook){
  cout<<"Name "<<p.first<<"->";
  for(string s:p.second){
    cout<<s<<",";
  }
  cout<<endl;
}

string name;
cin>>name;
if(Phonebook.count(name)==0){
  cout<<"Absent";
}else{
 for(string s:Phonebook[name]){
  cout<<s<<endl;
 } 
}

return 0;

}