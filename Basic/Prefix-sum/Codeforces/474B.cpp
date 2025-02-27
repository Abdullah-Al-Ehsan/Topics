  #include <bits/stdc++.h>
  using namespace std;
  #define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define ll long long
  #define all(v) v.begin(),v.end()
  #define yes cout << "YES" << endl;
  #define no cout << "NO" << endl;
  #define ceill(a,b) ((a+b-1)/b)                                                                                                                                                                   
 //ll power(ll b,ll i) { ll result = 1; while (i > 0)   {  if (i % 2 == 1)  result *= b; b *= b; i /= 2; } return result;}
 //bool isPrime (ll n ) { if ( n <= 1 ) return false;ll sqrtn = sqrt(n); for (ll i = 2; i <= sqrtn; i++ ) { if ( n % i == 0 ) return false;} return true;}
  const ll M=1e9+7;
  const int mod=1e9+7;
  const int N=200000;
  const ll inf=1e15;


  
      void solve()
      {
          vector<int>a,q;
          int n;
          cin>>n;
          for(int i=0;i<n;i++)
          {
               int x;
               cin>>x;
               a.push_back(x);
          }
          vector<ll>pre(n+1,0);
          pre[0]=0;
          for(int i=1;i<=n;i++)
          {
                pre[i]=pre[i-1]+a[i-1];
          }
          vector<ll>ans(pre[n]+1,0); 
          int cnt=1;
          for(int i=0;i<n;i++)
          {
                for(ll k=pre[i]+1; k<=pre[i+1]; k++)
                {
                       ans[k]=cnt;
                }
                cnt++;
          }
          int m;
          cin>>m;
          for(int i=0;i<m;i++)
          {
               int x;
               cin>>x;
               cout<<ans[x]<<endl;
          }
      }
 int main()
 {
      //int T; cin>>T;                   
     // for(int k=1; k<=T;k++)
      solve();
}
   
