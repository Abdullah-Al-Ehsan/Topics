#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ceill(a,b) ((a+b-1)/b)
 ll power(ll b,ll i) { ll result = 1; while (i > 0)   {  if (i % 2 == 1)  result *= b; b *= b; i /= 2; } return result;}
 bool isPrime (ll n ) { if ( n <= 1 ) return false;ll sqrtn = sqrt(n); for (ll i = 2; i <= sqrtn; i++ ) { if ( n % i == 0 ) return false;} return true;}
const int Mod = 1e9 + 7;
const ll MAX = 1e15;
const int Num = 1000000 + 7; 
 
  void solve()
   {
        int n,q;
        cin>>n>>q;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll pre[n+1];
        pre[0]=0;
        for(int i=1;i<=n;i++)
        {
              pre[i]=pre[i-1]+a[i-1];
        }
        for(int i=0;i<q;i++)
        {
             int l,r;
             cin>>l>>r;
             cout<<pre[r]-pre[l-1]<<'\n';
        }
   }
 
  int main()
  {
    fast_io;
    // int T;
    // cin>>T;                 
    // for(int k=1; k<=T;k++)
    solve();
  }
