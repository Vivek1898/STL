#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
#define read(x) \
  int x;        \
  cin >> x
using namespace std;

void init_code()
{
  fast_io;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

int main()
{
  init_code();
  int t = 1;

  cin >> t;
  while (t--)
  {
    int players;
    cin >> players;

    char Playermoves[players], output[players];

    for (int i = 0; i < players; ++i)
    {
      cin >> Playermoves[i];
      /* code */
    }
    //Storing last value for (n-1)th item
    output[players - 1] = Playermoves[players - 1];
    
    //traversing from n-2 th item

    for (int i = players - 2; i >= 0; i--)
    {
      if (Playermoves[i] == Playermoves[i + 1])
      {
        output[i] = output[i + 1];
      }
      else if ((Playermoves[i] == 'P' && Playermoves[i + 1] == 'S') || (Playermoves[i] == 'S' && Playermoves[i + 1] == 'R') || (Playermoves[i] == 'R' && Playermoves[i + 1] == 'P'))
      {
        output[i] = output[i + 1];
      }
      else
      {

        int j = i;
        while (j < players - 1)
        {
          if ((Playermoves[i] == 'P' && Playermoves[j + 1] == 'S') || (Playermoves[i] == 'S' && Playermoves[j + 1] == 'R') || (Playermoves[i] == 'R' && Playermoves[j + 1] == 'P')|| (Playermoves[i]== Playermoves[j+1]))

          {

            output[i] = output[j + 1];
            break;
          }
          else if (j == players - 2)
          {
            output[i] = Playermoves[i];
            j++;
          }
          else
          {
            j++;
          }
        }
      }
      /* code */
    }

    for (int i = 0; i < players; ++i)
    {
      cout << output[i];
    }
    cout << endl;
  }

  return 0;
}