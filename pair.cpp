#include<iostream>
#include <algorithm>
#include <vector>
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
	
  pair <int,char>p;
  p.first=10;
  p.second='B';

  pair<int,char>p2(p);
  cout<<p2.first<<endl;
  cout<<p2.second<<endl;

pair<int,string>p3=make_pair(100,"Book");
cout<<p3.first<<endl;
  cout<<p3.second;

  pair <pair<int,int>,string>car;
  car.second="BBB";
  car.first.first=15;
  car.first.second=17;


  cout<<car.first.first<<endl;
  cout<<car.first.second<<endl;



}