#include<iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <unordered_map>  
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
//UNORDERED MAP
//SEPRATE CHAINING
//FIND HASH INDEX AND STORE KEY VALUE
//HASH TABLE
//O(1) Time
//LF>0.75-->REHASHING
//NOT ORDERED
class student{
public:
  string fname;
  string lname;
  string rollno;
  student(string f,string l,string r){
    fname=f;
    lname=l;
    rollno=r;
  }
  bool operator==(const student &s)const{
    return rollno==s.rollno;
  }
};
class Hash{

//Unsigned int
public:
  size_t operator()(const student &s) const{
    return s.fname.length()+s.lname.length();

  }


};


int main(){
	init_code();
  unordered_map<student,int,Hash>student_map;

 
student s1("Vivek","Singh","010");
student s2("Rahul","Kumar","023");
student s3("amit","Sharma","011");
student s4("Rahul","Kumar","029");

//Add marks
student_map[s1]=100;
student_map[s2]=10;
 student_map[s3]=70;
student_map[s4]=60;
//Find marks of student s3
cout<<student_map[s3]<<endl;

for(auto s:student_map){
  cout<<s.first.fname<<" "<<s.first.rollno<<" Marks "<<s.second<<endl;
}


return 0;

}