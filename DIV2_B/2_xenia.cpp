#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<'='<<x<<endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int binary_expo(int a,int b);
  
void solve()
{
       ll n,m;
       cin>>n>>m;
       ll a[m+1];
       for(int i=1;i<=m;i++)
       {
           cin>>a[i];
       }
    ll ans=0;
       
      for(int i=1;i<=m;i++)
      {
          if(i==1)ans=ans+a[i]-1;
          else if(a[i-1]>a[i])
          {
              ans=ans+(n-a[i-1]+a[i]);
          }
          else {ans=ans+a[i]-a[i-1];}
      }
       cout<<ans<<endl;
} 
 
int main()
{
 
fastio();
/* #ifndef ONLINE_JUDGE
freopen(     ,  ,stdin);
freopen(     ,   ,stdout);
#endif */
 
solve();
return 0;
 
}
 
 int binary_expo(int a,int b)
{
     int result=1;  
   while(b>0){             
     if(b%2!=0){   result=result*a;  }           
        a=a*a;      
         b=b/2;  
          } 
return result; 
}