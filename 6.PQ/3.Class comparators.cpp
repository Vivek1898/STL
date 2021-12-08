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
class person{
public:

   string name;
   int age;
   person(){

   }
   person(string s,int a){
      name=s;
      age=a;
   }
  };

  class personcompare
  {
  public:
   bool operator()(person a,person b){
      return a.age<b.age;
   }
          
  };

int main(){
	init_code();
   int n;
   cin>>n;
   priority_queue<person,std::vector<person>,personcompare>pq;
for (int i = 0; i < n; ++i)
{
   string name;
   int age;
   cin>>name>>age;
   person p(name,age);
   /* code */
   pq.push(p);
}
//FIND TOP K PERSON WITH MAX AGE
int k=3;
for (int i = 0; i < k; ++i)
{
   person p=pq.top();
   cout<<p.name<<" "<<p.age<<endl;
   pq.pop();
   /* code */
}
 
return 0;

}