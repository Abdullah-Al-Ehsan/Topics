  #include <bits/stdc++.h>
  using namespace std;
  #define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
  #define ll long long
  #define yes cout << "YES" << endl;
  #define no cout << "NO" << endl;
  #define ceill(a,b) ((a+b-1)/b)                                                                                                                                                                   
 
      void solve()
      {
             ll n,c;
             cin>>n>>c;
             vector<ll>v(n);
             for(int i=0;i<n;i++)cin>>v[i];
             
             ll l=0;
             ll r=1e9;
             while(1)
             {
                  ll mid=(l+r)/2;
                  ll sum=0;
                  for(int i=0;i<n;i++)
                  {
                       ll side=v[i]+2*mid;
                       sum+=side*side;
                       if(sum>c)
                       {
                            break;
                       }
                  }
                  if(sum==c)
                  {
                     cout<<mid<<endl;
                      return;
                  }
                  if(sum>c)r=mid-1;
                  else if(sum<c)l=mid+1;
             }
      }
 int main()
 {    
      fast_io;
      int T; cin>>T;                   
      for(int k=1; k<=T;k++)
      solve();
}
