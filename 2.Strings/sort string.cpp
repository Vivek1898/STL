// Tokenaize string
// convert key into integer
// sort==Lexio or numeric
// check for reversed

#include<iostream>
#include <algorithm>
#include <vector>
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

string findkey(string str,int key){
	//By default it returns char array
	//by space
	//c_str()--returns constant Null terminated pointer to the character array storage of the string.
	char *s=strtok((char*)str.c_str()," ");
	// gives ist token

	while(key>1){
		s=strtok(NULL," ");
		key--;
	}
	return (string)s;

} 

int converttoint(string s){
	int ans=0;
	int p=1;
	for (int i = s.length()-1; i>=0; --i)
	{
		ans+=((s[i]-'0')*p);
		p*=10;
		/* code */
	}
	return ans;
}

//sorting array og pairs inside strings
bool numericCompare(pair<string,string>s1,pair<string,string>s2){
	string key1,key2;
	key1=s1.second;
     key2=s2.second;
	return converttoint(key1)<converttoint(key2);

}


bool LexioCompare(pair<string,string>s1,pair<string,string>s2){
	string key1,key2;
	key1=s1.second;
	key2=s2.second;

	return key1<key2;

}



int main(){
	init_code();

int n;
cin>>n;
cin.get();
// 2\n
// s1
// s2
//Provide new line
string a[100];
for (int i = 0; i < n; ++i)
{
	getline(cin,a[i]);
	/* code */
}

int key;
string reverse,order;
cin>>key>>reverse>>order;

pair<string,string> strPair[100];
for (int i = 0; i < n; ++i)
{
	strPair[i].first=a[i];
	strPair[i].second=findkey(a[i],key);
	/* code */
}

//Sorting

if(order=="numeric"){
sort(strPair,strPair+n,numericCompare);

}
else{

	//Lexio
	sort(strPair,strPair+n,LexioCompare);
}


if(reverse=="true")
{
	for (int i = 0; i < n/2; ++i)
	{
		swap(strPair[i],strPair[n-i-1]);
		/* code */
	}
}

//Printing
for (int i = 0; i < n; ++i)
{
	cout<<strPair[i].first<<endl;
	/* code */
}
return 0;
}