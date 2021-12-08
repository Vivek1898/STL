#include<iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
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
class Fun{
public:
   void operator()(string s){
      cout<<"Inside Func "<<s<<endl;
   }
};

int main(){
	init_code();
   Fun f; //Cons call
   f("I AM CALLED");//Overloaded ()operator=func call where f is an object

  
return 0;

}