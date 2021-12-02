#include<iostream>
#include <algorithm>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
//For increasing and decreasing
bool compare(int a,int b){
	cout<<"Comparing "<<a<<"ANd "<<b<<endl;
	return a<b;
}
void bubble(int a[],int n,bool (&cmp)(int a,int b)){
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-i-1;j++){
		if(cmp(a[j],a[j+1])){
			swap(a[j],a[j+1]);
		}
	}

	}
}

int main(){
	 init_code();
int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];

	}

//sort(a,a+n,compare);//proper n input

bubble(a,n,compare);//n-1 input

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		
	}
}