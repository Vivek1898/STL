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
//Priority quueu 
//Push/Remove--logn
//Implemment cbt 
//Top -o(1)
//empty()
//Highest no has heighest priority
//MAX HEAP BY DEFAULT
int main(){
	init_code();
  // priority_queue<int>pq;
//Min Heap using comparators
   priority_queue<int,std::vector<int>,greater<int>>pq;
int n;
cin>>n;
//Insert In heaap
   for (int i = 0; i < n; ++i)
   {int no;
    cin>>no;
    pq.push(no);
       /* code */
   }

   //Remove

   while(!pq.empty()){
    cout<<pq.top()<<endl;
    pq.pop();
   }

return 0;

}