#include<iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>  
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
//MAAP AND UNORDERED MAP  
//STORE KEY-VALUE PAIR
//SELF BALANCED BST
//ORDERD ACCO TO KEY
//Lexiographical sorted


int main(){
	init_code();
//INSERTION

  map<string,int>m;

   m.insert(make_pair("Mango",100));

   pair<string,int>p;
   p.first="Apple";
   p.second=120;

   m.insert(p);
   m["Banana"]=2;

  string fruit;
  cin>>fruit;
//update the price
  m[fruit]+=20;


//Returns map<string,int>:: iterator it
  auto it=m.find(fruit);
  if(it!=m.end()){
    //Present
    cout<<"Price "<<fruit<<" - "<<m[fruit]<<endl;


  }
  else{
    cout<<"Not Present";
  }

  //Map stores unique keys only once

if(m.count(fruit)){
  cout<<endl<<"Price is - "<<m[fruit]<<endl;
}
m["L"]=55;
m["P"]=8;
for (auto it = m.begin(); it!= m.end(); ++it)
{
  cout<<it->first<<"and "<<it->second<<endl;
}

for(auto p:m){

cout<<p.first<<"and "<<p.second<<endl;

}









//Erase

m.erase(fruit);
  
 
return 0;

}