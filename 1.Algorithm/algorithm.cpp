#include<iostream>
#include <algorithm>
using namespace std;


int main(){
	
	int a[]={20,30,40,40,50,100,1100};
	int n=sizeof(a)/sizeof(int); 
	int key=5;
//SEARCH---->find(start,end,key)

	// int key=1888;
	// auto it=find(a,a+n,key);
	// int idx=it-a;
	// if(idx==n){
	// 	cout<<"not found";
	// }else{
	// cout<<idx<<endl;	
	// }
	

//Binary search

	bool present=binary_search(a,a+n,40);
	if(present){
		cout<<"present";

	}
	else{
		cout<<"absent";
	}
	//  

 auto it=lower_bound(a,a+n,41);
 cout<<endl<<(it-a)<<endl;


 auto it2=upper_bound(a,a+n,40);
 cout<<(it2-a)<<endl;

 cout<<"Occ of 40 "<<it2-it<<endl;

	return 0;
}