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

int n , m;
int x1,y1,x2,y2;
scanf("%d %d",&n,&m);
std::vector<vector<int>> v1;

for(int i=0;i<n;i++){

 v1.pb(x1,y1);
}


for(int i=0;i<m;i++){
  
   v1.pb(x2,y2);
}


 //        cout << "(" << v2[i].first << ","
 //            << v2[i].second << ")" << "; ";
 //    }
 // for (auto i = 0; i < n; ++i) {
 //        cout << "(" << v2[i].first << ","
 //            << v2[i].second << ")" << "; ";
 //    }
 //    cout << endl;
 

   return 0;
}

