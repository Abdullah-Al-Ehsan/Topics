#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long

  void solve()
   {
        ll n;
        cin>>n;
        ll mx=0;
        vector<ll>div;
        for(int i=1;i*i<=n;i++)   //find all divisors;
        {
                if(n%i==0)
                {
                     div.push_back(i);
                     div.push_back(n/i);
                }
        }
        for(int i=0;i<div.size();i++)
        {
              if(n-div[i]!=0)
              {
                   mx=max(mx,div[i]);
              }
        }      
        cout<<mx<<" "<<n-mx<<'\n';
   }

  int main()
  {
    fast_io;
    int T; cin>>T;                   
    for(int k=1; k<=T;k++)
    solve();
    return 0;
  }
