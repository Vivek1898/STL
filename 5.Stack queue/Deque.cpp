#include<iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
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
//insert and delete at front and middle
//push bCK--pop back
//push front --pop front
//random acess possible+growing from both ends
//list+vectors



//Maximum sum of window of size k
//O(n)
//ip
// 9
//1 2 3 1 4 5 2 3 6
//3


int main(){
	init_code();
    int n ,k;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        /* code */
    }
    cin>>k;
    deque<int>q(k);
    //1 2 3 4 59
    //1 2 3
    //q push--0--indx
    //2>1
    //Storinf index in deque
    //And comparing with array element
    for (int i = 0; i < k; i++)
    {
        while(!q.empty() && a[i]>a[q.back()]){
           q.pop_back();
        }
        q.push_back(i);
        /* code */
    }
    //remaining wlwment
    int i;
    for(i=0;i<n;i++){
        cout<<a[q.front()]<<" ";
        //Remove i-k elements
        //1.remove the elem not part from window
        while((!q.empty() && (q.front()<=i-k))){
            q.pop_front();
        }

        //2.remove the elem not useful in window
        //Remove smaller elements
   while(!q.empty() && a[i]>=a[q.back()])

{
    q.pop_back();

}

//3.add the new elements
q.push_back(i);

    }

return 0;

}