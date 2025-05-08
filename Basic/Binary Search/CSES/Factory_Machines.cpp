#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ceill(a,b) ((a+b-1)/b)                                                                                                                                                                   
ll power(ll b,ll i) { ll result = 1; while (i > 0)   {  if (i % 2 == 1)  result *= b; b *= b; i /= 2; } return result;}
bool isPrime (ll n ) { if ( n <= 1 ) return false;ll sqrtn = sqrt(n); for (ll i = 2; i <= sqrtn; i++ ) { if ( n % i == 0 ) return false;} return true;}
const int Mod=1e9+7;
const ll MAX=1e18;
int Num=1000000+7;
 
 
void solve()
{
      ll n,k;
      cin>>n>>k;
      vector<ll>v(n);
      for(int i=0;i<n;i++)cin>>v[i];
      ll low=1;
      ll high=1e18;
      ll cnt=0;
      while(low<high)
      {
            cnt=0;
            bool f=0;
            ll mid=(low+high)/2;
            //cout<<mid<<' ';
            for(auto e:v) 
            {
                  if(mid/e>k){ f=1;break;};
                  cnt+=mid/e;
            }
                  if(f)high=mid;
                  else
                  {
                        if(cnt>=k)high=mid;
                        else low=mid+1;
                  }   
      }
        cout<<high<<endl;
}
 
int main()
{    
    fast_io;
    solve();
 
}
