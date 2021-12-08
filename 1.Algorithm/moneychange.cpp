#include<iostream>
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

// Look for 1 st smallest of amount in coins
// largest one less than 68 and subtract

bool compare(int a,int b){
	return a<=b;
}
int main(){
	 init_code();
	 int coins[]={1,2,5,10,20,50,100,200,500,2000};
	 int n=sizeof(coins)/sizeof(int);
	 int money=168;
	 //it will give something greater than equal 168 so use comparator
    while(money>0){
    	int lb=lower_bound(coins,coins+n,money,compare)-coins-1;
	 int m=coins[lb];

	 cout<<m<<endl;
	 money-=m;


    }
	 
	 return 0;
 
}