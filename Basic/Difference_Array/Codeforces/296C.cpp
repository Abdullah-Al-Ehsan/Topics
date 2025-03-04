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
         ll n,m,k;
         cin>>n>>m>>k;
         vector<ll>v(n+1),dif(n+1,0);
         for(ll i=0;i<n;i++)cin>>v[i];
         vector<tuple<ll,ll,ll>>vt;
         while(m--)
         {
             ll l,r,d;
             cin>>l>>r>>d;
             --l;--r;
             vt.push_back({l,r,d});
         }
         vector<ll>fq(vt.size()+1,0);
         while(k--)
         {
              ll x,y;
              cin>>x>>y;
              --x;--y;
              fq[x]++;
              fq[y+1]--;
         }
         for(int i=1;i<vt.size();i++)
         {
              fq[i]+=fq[i-1];
         }
          v[n]=0;
          for(int i=0;i<vt.size();i++)
          {
                ll add = fq[i]*get<2>(vt[i]);
                dif[get<0>(vt[i])]+=add;
                
                if(get<1>(vt[i])+1<dif.size())
                 {
                    dif[get<1>(vt[i])+1]-=add;
                 }
          }
          for(ll i=1;i<n;i++)
          {
               dif[i]+=dif[i-1];
          }
          for(int i=0;i<n;i++)
          {
               v[i]+=dif[i];
          }
          for(int i=0;i<n;i++)cout<<v[i]<<" ";
          cout<<'\n';
   }
  int main()
  {
    fast_io;
    solve();
  }
