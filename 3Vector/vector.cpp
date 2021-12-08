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
	
  std::vector<int> a;
  std::vector<int> b(5,10);//5 integer with value 10
  std::vector<int> c(b.begin(), b.end());
  std::vector<char> d{1,2,3,88};

//   for (int i = 0; i < c.size(); ++i)
//   {
//     cout<<c[i]<<" "<<endl;
//     /* code */
//   }

// for(auto it=b.begin();it!=b.end();it++){
//   cout<<(*it)<<" ,";
// }
 

//  for(int x:d){
//   cout<<x<<" "<<endl;
//  }


std::vector<int> v;
v.push_back(10);

cout<<b.size()<<endl;
cout<<v.capacity()<<endl;
cout<<b.max_size()<<endl;



}