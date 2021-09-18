#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<'='<<x<<endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int binary_expo(int a,int b);
  
void solve()
{
      int n,l;
      cin>>n>>l;
      double a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
      double mid=0;
      for(int i=1;i<n;i++)
      {
          if(a[i]-a[i-1]>mid)
          {
              mid=a[i]-a[i-1];
          }
      }
      double ans1=max(a[0],abs(a[n-1]-l));
      double fans=max(mid/2,ans1);
      cout<<fixed<<setprecision(9)<<fans<<endl;

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