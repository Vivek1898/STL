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


int main(){
	init_code();
	

  char s[180]="Today is a rainy day";
  //Create new array copies first token and return base adress of that array
 
char *p=strtok(s,"");

cout<<p<<endl;
//For all tokens
//remove duplicate by using Null

while(p!=NULL)
{
  p=strtok(NULL," ");

cout<<p<<endl;
}


}