#include<iostream>
#include <algorithm>
#include <vector>
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
//sort acco to car name and distance
//Vector + pair+ string

class car{
public:
    string car_name;
    int x,y;
car(){

}
car(string n,int x,int y){
    car_name=n;
    this->x=x;
    this->y=y;
}
int distance( )
{
    //return sq of distavce
    return x*x+y*y; 
}
};


//d=sq(x1)+sq(x2)
bool compare(car a,car b){
int da=a.distance();
int db=b.distance();
if(da==db){
    return a.car_name.length()<b.car_name.length();
}


return da<db;  

}

//Which cab is shortest from origin to car
//Xy cordinate of car is given

int main(){
	init_code();
int n;
cin>>n;
std::vector<car> v;
for (int i = 0; i < n; ++i)
    {int x,y;
        string name;
        cin>>name>>x>>y;
        car temp(name,x,y);
        v.push_back(temp);
        /* code */
    }
    sort(v.begin(),v.end(),compare);	
 for(auto p:v){
    cout<<"Car - "<<p.car_name<<" Distance- "<<p.distance()<<"Location x- "<<p.x<<" y- "<<p.y<<endl;
 }

}