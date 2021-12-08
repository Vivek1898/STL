#include<iostream>
#include<set>
#include <algorithm>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

//Update not allowed
//
//Lower bound >=
//Upper bound >
//strictly greater
int main(){
	 init_code();
	 set<pair<int,int>>s;
	 s.insert(make_pair(10,20));
	  s.insert(make_pair(17,80));
	   s.insert(make_pair(50,26));
	    s.insert(make_pair(10,20));
	     s.insert(make_pair(10,20));
	      s.insert(make_pair(5,3));

s.erase(make_pair(5,3));
	 s.insert(make_pair(5,4));
	for(auto p:s){
		cout<<p.first<<","<<p.second<<endl;
	}      

}