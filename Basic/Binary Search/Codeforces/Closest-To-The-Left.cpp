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
const ll MAX=1e15;
int Num=1000000+7;

    void solve()
    {
          int n,k;
          cin>>n>>k;
          vector<int>a(n),q(k);
          for(int i=0;i<n;i++)cin>>a[i];
          for(int i=0;i<k;i++)cin>>q[i];
          sort(a.begin(),a.end());
          for(int i=0;i<k;i++)
          {
                  int low=0;
                  int high=n-1;
                  bool bb=0;
                  while(low<=high)
                  {
                        int mid=(low+high)/2;
                        if(a[mid]==q[i])
                        {
                            low=mid+1;
                        }
                        else if(a[mid]>q[i])high=mid-1;
                        else low=mid+1;
                  }
                  cout<<low<<endl;
          }
    }
int main()
{    
    fast_io;
    solve();
}
