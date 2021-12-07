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

list<int> l{1,2,3,5,7,99,0};

list<string>l2{"zsa","bsaf","dd","aa","qs","ee"};
l2.push_back("Vivek");

l2.sort();
l2.reverse();
cout<<l.front()<<endl;
l.pop_front();
cout<<l.front()<<endl;


//Add to front
l2.push_front("Singh");

// for (auto it = l2.begin();it!=l2.end();  ++it)
// {
//     cout<<(*it)<<endl;
//     /* code */
// }
l2.remove("zsa");

//Erase from pos
auto it=l2.begin();
it++;
it++;
l2.erase(it);


//similarly

//l2.insert(it,"hi");

for(string s:l2){
    cout<<s<<endl;
}


return 0;

}