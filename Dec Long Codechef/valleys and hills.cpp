#include<bits/stdc++.h>
#include<string>
#include<vector>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
int main() {
   init_code();
   int t = 1;


   cin >> t;
   while(t--){
int hill,valleys;
cin>>hill>>valleys;

string out="";

// hills and valleys are same

// 3 hill 3 valley
// repeat 01 --> 4 times(hill +1)times

if(hill==valleys)
{int i=0;
  while(i<hill+1){
    out+="01";
    i++;
  }

// if valleys are more than hills
//   3 valley 2 hills
//  repaet 10 hill+1 --> 3 times
// atlast add 1 to output


}else if(valleys>hill){
  int j=0;
  while(j<hill+1){
    out+="10";
    j++;
  }
    int k=0;
  while(k<valleys - hill-1){
    out+="110";
    k++;
  }
  out+="1";
}
  // 3  2
  // if hills are more than valleys
  // repeat 01 valleys times--->2 times
  // and 010 hill -valleys times ---> 1 time
     else if(hill>valleys){

      for(int i=0;i<valleys;i++){
        out+="01";
      }
      for (int i = 0; i < hill-valleys; ++i)
      {
       out+="010";
      }

     }
     cout<<out.size()<<endl;
     cout<<out<<endl;
 }

   return 0;
}