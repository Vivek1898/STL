#include<iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
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

//LIFO
int main(){
	init_code();

stack<int>s;
s.push(10);
s.push(10);
s.push(10);

cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;

cout<<"Queue FIFO"<<endl;

queue<int>q;
q.push(40);
q.push(50);
q.push(40);
q.push(50);

cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;


return 0;

}