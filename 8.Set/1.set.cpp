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

int main(){
	 init_code();
	 int a[]={10,20,11,30,11,50};
	 int n=sizeof(a)/sizeof(int);

	 set<int>s;
	 for (int i = 0; i < n; ++i)
	 {
	 	s.insert(a[i]);
	 	/* code */
	 }
	 s.erase(10);

	 for(set<int>::iterator it=s.begin();it!=s.end();it++){
	 	cout<<*(it)<<",";
	 }

}