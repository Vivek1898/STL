#include<bits/stdc++.h>
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
   char first ,second,third;
   char x,y;
   int op1=0,op2=0;

   cin >> t;
   while(t--){
         cin>>first>>second>>third;
        cin>>x>>y;

      if(first==x) op1=3;
  if(second==x) op1=2;
  if(third==x)op1=1;

  if(first==y) op2=3;
  if(second==y) op2=2;
  if(third==y)op2=1;

if(op1>op2){
   cout<<x<<endl;

}else{
   cout<<y<<endl;
}

 }

   
  
   return 0;
}