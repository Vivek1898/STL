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
	int aa=10;
	int b=20;

	swap(aa,b);
	//cout<<max(aa,b)<<min(aa,b);

	int a[]={1,2,3,4,4,5};
   int n=sizeof(a)/sizeof(int);


   //REVerse first 4 elements of array
   reverse(a,a+4);

    for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
 }


 next_permutation(a,a+n);
 cout<<endl;

  for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
 }

}