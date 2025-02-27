#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ceill(a,b) ((a+b-1)/b)

const int Mod = 1e9 + 7;
const ll MAX = 1e15;
const int Num = 1000000 + 7; 

  void solve() {
       ll n;
       cin>>n;
       vector<ll> v(n);
       for(int i=0;i<n;i++)cin>>v[i];
   
       ll gval=0;   
       for (int i=0;i<n;i++)gval=__gcd(gval,v[i]);
   
       ll cnt=0;
       for (ll i=1;i*i<=gval;i++)
       {
            if(gval%i==0)
            {
                if(i!=gval/i)cnt+=2;
                else cnt++;
            }
       }
       cout<<cnt<<'\n';
 }

  int main()
  {
    fast_io;
    solve();
    return 0;
  }
