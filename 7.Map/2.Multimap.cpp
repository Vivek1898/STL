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
//MULTIMAPS CONTAINS 
//Multiple elem have SAME KEYS
//Insert find erase --->O(logn)--b/c self balancing bst

int main(){
	init_code();
  
  multimap<char,string>m;
  int n;
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    char ch;
    string s;
    cin>>ch>>s;
    m.insert(make_pair(ch,s));
    /* code */
  }
  //Erase
  auto it=m.begin();
  m.erase(it);

  auto it2=m.lower_bound('b');
  auto it3=m.upper_bound('d');
  for(auto it4=it2;it4!=it3;it4++){
    cout<<it4->second<<" ,"<<endl;
  }
  //FIND

  auto f= m.find('c');
  if(f->second=="cat"){
    m.erase(f);
  }

 for(auto p:m){
  cout<<p.first<<" And "<<p.second<<endl;
 }
 
return 0;

}