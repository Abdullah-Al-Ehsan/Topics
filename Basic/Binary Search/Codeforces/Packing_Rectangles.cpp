  #include <bits/stdc++.h>
  using namespace std;
  #define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
  #define ll long long
  #define yes cout << "YES" << endl;
  #define no cout << "NO" << endl;
  #define ceill(a,b) ((a+b-1)/b)                                                                                                                                                                   
  ll power(ll b,ll i) { ll result = 1; while (i > 0)   {  if (i % 2 == 1)  result *= b; b *= b; i /= 2; } return result;}
  bool isPrime (ll n ) { if ( n <= 1 ) return false;ll sqrtn = sqrt(n); for (ll i = 2; i <= sqrtn; i++ ) { if ( n % i == 0 ) return false;} return true;}
  const int M=1e9+7;
  const ll MAX=1e15;
  int Num=1000000+7;
  

     bool Valid(ll mid,ll h,ll w,ll n)
     {
             ll ans= (mid/w) * (mid/h);
             if(ans>=n)return true;
             else return false;
     }

      void solve()
      {
            ll w,h,n;
            cin>>w>>h>>n;
            
            ll l=1;
            ll r=1;
            while(!Valid(r,h,w,n))
            {
                  r=r*2;
            }
            while(l<r)
            {
                   ll mid=(l+r)/2;
                   if( Valid(mid,h,w,n))
                   {
                          r=mid;
                   }
                   else l=mid+1;
            }
            cout<<l<<endl;
      }
 int main()
 {    
      fast_io;
      solve();
}
