#include<iostream>
#include <algorithm>
#include <vector>

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

 int a[]={10,20,30,40,50};
 int n=sizeof(a)/sizeof(int);

 rotate(a,a+2,a+n);

 for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
 }


cout<<" Vectors"<<endl;
 std::vector<int> v{10,20,30,40,50};
 rotate(v.begin(),v.begin()+3,v.end());
for(int i=0;i<v.size();i++){
   cout<<v[i]<<endl; 
}


//Genrate nect numbers by reaarranging

cout<<" NEXT PERMUTATION"<<endl;
std::vector<int> v1{10,20,30,40,50};
next_permutation(v1.begin(), v1.end());
//for each

for(int x:v1){
    cout<<x<<" ";
}

cout<<endl;

next_permutation(v1.begin(), v1.end());
//for each

for(int x:v1){
    cout<<x<<" ";
}







     }