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
	
 std::vector<int> v{189,2,366,41,5,66};
 v.push_back(160);
 
 //insert at specific place


 v.insert(v.begin()+3,4,200);

//Erase at specific position

 v.erase(v.begin()+2);
 v.erase(v.begin()+2,v.begin()+5);

 cout<<v.size()<<endl;
 cout<<v.capacity()<<endl;


//v.resize(12);

//Clear all elements and not delete memory occupied by array
v.clear(); 

 for(int x:v){
    cout<<x<<" "<<endl;
 }
 cout<<v.size();
if(v.empty()){
    cout<<"Empty Vector"<<endl;
}
v.push_back(10);
v.push_back(20);
v.push_back(30);


cout<<v.front()<<endl;
cout<<v.back()<<endl;

//Use reverse for avoid extra space
v.reserve(1000);
//reverse for 1000 elements and fix capacity avoid copying


}