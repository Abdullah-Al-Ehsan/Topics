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
         int n,k;
         cin>>n>>k;
         vector<ll>v(k),c;
         ll mn=MAX;
         for(int i=0;i<k;i++)cin>>v[i];
         if(k==1)
         {
            yes; return;
         }
        for(int i=0;i<k-1;i++)c.push_back(v[i+1]-v[i]);

        for(int i=1;i<k-1;i++)
        {
              if(c[i]<c[i-1])
              {
                  no; return;
              }
        }
        if(c[0]*(n-k+1)<v[0])
        {
            no;
            return;
        }
        yes;
         
   }
  int main()
  {
    fast_io;
    int T;
    cin>>T;                 
    for(int k=1; k<=T;k++)
    solve();
  }
