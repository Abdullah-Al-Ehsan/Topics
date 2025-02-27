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
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll gcda=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            gcda=__gcd(gcda,v[i]);
        }
        if(gcda==1)cout<<'0'<<'\n';
        else if(__gcd(gcda,n)==1) cout<<'1'<<'\n';
        else if(__gcd(gcda,n-1)==1)cout<<'2'<<endl;
        else cout<<'3'<<endl;     
   }
  int main()
  {
    fast_io;
    int T; cin>>T;                   
    for(int k=1; k<=T;k++)
    solve();
    return 0;
  }
