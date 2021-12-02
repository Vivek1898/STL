#include<iostream>
#include <list>
#include <string>
using namespace std;

class book{
public:
string name;
int price;

book(){

}
book (string name,int price){
	this->name=name;
	this->price=price;
}

};

//Op overloading 
class bookcompare{
public:
	bool operator()(book A ,book B){
		if(A.name==B.name){
			return true;
		}
		return false;
	}

};
template<class ForwardIterator ,class T,class compare>
ForwardIterator search(ForwardIterator s,ForwardIterator e, T k,compare cmp){
	while(s!=e){
		if(cmp(*s,k)){
			return s;
		}
		s++;
	}
	

	return e;


}

int main(){
book b1("C++",100);
book b2("py",200);
book b3("java",300);
book b4(b1);

list<book> l;
l.push_back(b1);
l.push_back(b2);
l.push_back(b3);
book bookfind("C+n+",110);

bookcompare cmp;


//list<book> :: iterator  it=search(l.begin(), l.end(),bookfind,cmp);
auto it=search(l.begin(), l.end(),bookfind,cmp);
if(it!=l.end()){
	cout<<"Book found";
}
else{
	cout<<"Not found";
}

// if(cmp(b1,bookfind)){
// 	cout<<"True ..Found";
// }



}