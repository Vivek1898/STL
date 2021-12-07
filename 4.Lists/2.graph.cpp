#include<iostream>
#include <algorithm>
#include <vector>
#include <list>
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
//L is pointer to array of link list
    //where each idx of array contains a list
//eg---> idx 0-(2,3)
        // idx 1-(4,5) make pair

list<pair<int,int>> *l;
int n;
cin>>n;
l=new list<pair<int,int>>[n];

int e;
cin>>e;

for (int i = 0; i < e; ++i)
{int x,y,wt;
    //Node 0 to node 3 wt =6
    //at o list add 0-->(3,8);
    cin>>x>>y>>wt;
    l[x].push_back(make_pair(y,wt));
    l[y].push_back(make_pair(x,wt));
    /* code */
}


for (int i = 0; i < n; ++i)
{
    cout<<"linked list "<<i<<"-> "; 
    for(auto xp:l[i]){
        cout<<"("<<xp.first<<","<<xp.second<<"),";
    }
    /* code */
    cout<<endl;
}




return 0;

}