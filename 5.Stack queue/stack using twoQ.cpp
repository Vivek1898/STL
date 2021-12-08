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

template<typename T>
class stack{

queue<T>q1,q2;
//Q1-push
//q2-empty
//For last emement pop push n-1 data in q2 
public:
void push(T x){
q1.push(x);
}

void pop(){
//remove last added elem in q1
    //move first n-1 elem in q2
    //interchange the names of q1 and q2
if(q1.empty()){
    return; 
}
//>1 means we are at last element for pop
while(q1.size()>1){
T element=q1.front();
q2.push(element);
q1.pop();
}
//remove last
q1.pop();

//swap the names
swap(q1,q2);


}

T top(){
while(q1.size()>1)
{
T element=q1.front();
q2.push(element);
q1.pop();
}
//1 element in q1

int element=q1.front();
q1.pop();
q2.push(element);
swap(q1,q2);

return element;
}
int size(){
    return q1.size()+q2.size();
}

bool empty(){
    return size()==0;
}
};


//LIFO
int main(){
	init_code();
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
 //cout<<s.top();
while(!s.empty()){
     
    cout<<s.top()<<endl;
    s.pop();
}
return 0;

}