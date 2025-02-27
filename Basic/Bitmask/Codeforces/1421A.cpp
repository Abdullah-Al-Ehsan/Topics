  #include <bits/stdc++.h>
  using namespace std;
  #define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define ll long long
  #define endl '\n';
  #define all(v) v.begin(),v.end()
  #define yes cout << "YES" << endl;
  #define no cout << "NO" << endl;
  #define ceill(a,b) ((a+b-1)/b)                                                                                                                                                                   
  ll power(ll b,ll i) { ll result = 1; while (i > 0)   {  if (i % 2 == 1)  result *= b; b *= b; i /= 2; } return result;}
 //bool isPrime (ll n ) { if ( n <= 1 ) return false;ll sqrtn = sqrt(n); for (ll i = 2; i <= sqrtn; i++ ) { if ( n % i == 0 ) return false;} return true;}
  const ll M=1e9+7;
  const int mod=1e9+7;
  const int N=100000000;
  const ll inf=1e15;

  int Num=1000000+7;
  
      void solve()
      {
            ll a,b;
            cin>>a>>b;
            cout<<(a^b)<<'\n';
      }
 int main()
 {
     int T; cin>>T;                   
     for(int k=1; k<=T;k++)
      solve();
}
   
