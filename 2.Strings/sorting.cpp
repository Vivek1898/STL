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

bool compare(string a,string b){

if(a.length()==b.length())
{
  return a<b;
}
 return a.length()>b.length();
 
}
int main(){
	init_code();
	
  int n;
  cin>>n;
  cin.get();

  string s[180];
  //Lexiograpphical sortingg happens



for(int i=0;i<n;i++){
  getline(cin,s[i]);
  
}

sort(s,s+n,compare);
for(int i=0;i<n;i++){
  cout<<s[i]<<endl;
} 
 



}