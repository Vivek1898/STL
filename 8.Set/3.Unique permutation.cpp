

#include<iostream>
#include<set>
#include<cstring>
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

void allPermutation(char a[],int i){
	if(a[i]=='\0'){
		cout<<a<<endl;
		return;
	}
	for (int j=i;a[j]!='\0'; j++)
	{
		swap(a[i],a[j]);
		allPermutation(a,i+1);
		swap(a[i],a[j]);
		/* code */
	}
}
void uniquePermutation(char a[],int i,set<string>&s){
	if(a[i]=='\0'){
		string t(a);
		s.insert(t);
		return;
	}
	for (int j=i;a[j]!='\0'; j++)
	{
		swap(a[i],a[j]);
		uniquePermutation(a,i+1,s);
		swap(a[i],a[j]);
		/* code */
	}
}
int main(){
	 init_code();
  set<string>s;
	 char a[100];
	 cin>>a;
	 //allPermutation(a,0);
   uniquePermutation(a,0,s);

   for(auto str:s){
   	cout<<str<<",";
   }
}