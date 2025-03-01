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
          int n;
          cin>>n;
          vector<pair<ll,ll>>p;
          while(n--)
          {
              ll a,b;
              cin>>a>>b;
              p.push_back({a,1});   //entry
              p.push_back({b,0});   //leave
          }
          sort(p.begin(),p.end());
          ll ans=0;
          ll sol=0;
          for(int i=0;i<p.size();i++)
          {
                if(p[i].second==1)ans++; 
                else ans--;
                sol=max(sol,ans);
          }
          cout<<sol<<'\n';
           
   }
  int main()
  {
    fast_io;
    solve();
  }
