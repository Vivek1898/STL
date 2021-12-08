#include<iostream>
#include <list>
using namespace std;
//making this function as genric

template<typename T>

int Linear_search(T a[],int n,T key){
	for(int p=0;p<n;p++){
	if(a[p]==key){
	return p;
	}
	}
	return n;
}

//Iterators
//TRakes srtrt and end
template<class ForwardIterator ,class T>
ForwardIterator search(ForwardIterator s,ForwardIterator e, T k){
	while(s!=e){
		if(*s==k){
			return s;
		}
		s++;
	}
	

	return e;


}


int main(){
	
	// int a[]={1,23,4,5,6,7,8
	// };
	// int n=sizeof(a)/sizeof(int); 
	// int key=8;
	//cout<<Linear_search(a,n,key)<<endl;

	// float b[]={1.1,1.2,1.5};
	// float k=1.2;
	//cout<<Linear_search(b,3,k)<<endl;
	list <int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	auto it =search(l.begin(), l.end(),6);
	if(it==l.end()){
     cout<<"Not found";
	}else{
	cout<<*it<<endl;	
	}
	
	return 0;


}