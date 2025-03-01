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
          int n,k,q;
          cin>>n>>k>>q;
          map<int,int>mp;
          while(n--)
          {
               int l,r;
               cin>>l>>r;
               mp[l]+=1;
               mp[r+1]-=1;
          }
          for(int i=1;i<=200000;i++)
          {
               mp[i]=mp[i]+mp[i-1];
          }

          for(int i=1;i<=200000;i++)
          {
               if(mp[i]>=k)mp[i]=1;
               else mp[i]=0;
          }
          
          for(int i=1;i<=200000;i++)
          {
                mp[i]=mp[i]+mp[i-1];
          }
          
          while(q--)
          {
               int a,b;
               cin>>a>>b;
               cout<<mp[b]-mp[a-1]<<'\n';
          }

   }
  int main()
  {
    fast_io;
    int T;
    solve();
  }
