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


   cin >> t;
   while(t--){

      int n;
      cin>>n;
      int v[n];
    for (int i = 0; i < n; ++i)
      {
       cin>>v[i];
      }  
int count=1;
 int mx = 1;
   
sort(v,v+n);


for (int i = 1; i < n; ++i)
{
  if(v[i]==v[i-1])
  {
   count++;
   mx=max(mx,count);
  }
  else{
   count=1;
  }
}
 if(n==mx){
        cout<<0<<endl;
        continue;
       
      }
      //no elements are same
       if(mx==1){
         cout<<-1<<endl;
         continue;
         
      }



     

int ans=n-mx+1;

cout<<ans<<endl;
 
      
 }

   return 0;
}