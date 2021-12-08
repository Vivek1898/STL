#include<iostream>
#include <algorithm>
#include <vector>
#include <list> 
#include <queue>
#include<cstdio>
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
//Make copy 
//pop
//print
void query_print(priority_queue<int,std::vector<int>,greater<int>>pq){
while(!pq.empty()){
   cout<<pq.top()<<" ";
   pq.pop();

}
cout<<endl;

}


//Make a min heap of k elements
//Traverse till whole size
//keep on checking new eement to min element in heap
//if new element>min element pop(min)and push(new)
//else we have max k elem in heap

int main(){
	init_code();
   int no;

   priority_queue<int,std::vector<int>,greater<int>>pq;
   int cs=0;
   int k=3;
   
   while(scanf("%d",&no)!=EOF){
    if(no==-1){
      query_print(pq);

    }else if(cs<k){
      pq.push(no);
      cs++;
    }
    else{
      if(no>pq.top()){
         pq.pop();
         pq.push(no);
      }
    }

   }
   



  
 
return 0;

}