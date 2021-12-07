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
//d=sq(x1)+sq(x2)
bool compare(pair<int,int>p1,pair<int,int>p2){
    int d1=p1.first*p1.first+p1.second*p1.second;
    int d2=p2.first*p2.first+p2.second*p2.second;
   //if same distance sort acco to x
    if(d1==d2){
        return p1.first<p2.first;
    }
   return d1<d2; 

}

//Which cab is shortest from origin to car
//Xy cordinate of car is given

int main(){
	init_code();
int n;
cin>>n;
std::vector<pair<int,int>> v;
for (int i = 0; i < n; ++i)
    {int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        /* code */
    }
    sort(v.begin(),v.end(),compare);	
 for(auto p:v){
    cout<<"Car - "<<p.first<<" "<<p.second<<endl;
 }

}