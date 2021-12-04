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
std::vector<pair<int,int>> v1;

for(int i=0;i<n;i++){
  scanf("%d %d",&x1,&y1);
 v1.pb(make_pair(x1,y1));
}
vector<pair<int,int>> v2;

for(int i=0;i<m;i++){
  scanf("%d %d",&x2,&y2);
 v2.pb(make_pair(x2,y2));
}

std::vector<int> sum1;
for (auto i = 0; i < n; ++i) {

sum1.pb(v1[i].first+v1[i].second);
  
}
std::vector<int> sum2;
for (auto i = 0; i < m; ++i) {

sum2.pb(v2[i].first+v2[i].second);
  
}

for (int i = 0; i < sum1.size(); ++i)
{
  cout<<sum1[i]-sum2[i+1]<<" ";
  cout<<sum2[i+1]-sum1[i]<<" ";
  cout<<sum2[i+2]-sum1[i+2]<<" ";
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

