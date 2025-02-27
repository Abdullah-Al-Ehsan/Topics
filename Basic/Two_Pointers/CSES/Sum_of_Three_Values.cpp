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
         ll n,x;
         cin>>n>>x;
         vector<pair<ll,ll>>a(n);
         ll sum=0,d,e,f;
         for(int i=0;i<n;i++)
         {
             cin>>a[i].first;
             a[i].second=i+1;
         }
         sort(a.begin(),a.end());
         bool bb=0;
         for(int i=0;i<n;i++)
         {
              int l=i+1;
              int r=n-1;
              while(l<r)
              {
                   sum=a[i].first+a[l].first+a[r].first;
                   if(sum==x)
                   {
                       cout<<a[i].second<<' '<<a[l].second<<' '<<a[r].second<<'\n';
                       bb=1;
                       break;
                   }
                   else if(sum>x)r--;
                   else l++;
              }
              if(bb==1){break;}
         }
         if(bb==0)
         {
          cout<<"IMPOSSIBLE"<<endl;
          return;
         }
         
  }
  int main()
  {
    fast_io;
    solve();
  }
