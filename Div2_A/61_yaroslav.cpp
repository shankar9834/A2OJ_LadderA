#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<'='<<x<<endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int binary_expo(int a,int b);
  
void solve()
{
      int n;
      cin>>n;int has[1001];
      memset(has,0,sizeof(has));
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          has[a[i]]++;
      }int mx=INT_MIN;int ind=0;int dd=0;
for(int i=0;i<1001;i++)
{
if(has[i]>mx){mx=has[i];ind=i;}
if(has[i]==1){dd++;}
}
int total=0;//deb(ind);
for(int i=0;i<1001;i++)
{
    if(i!=ind){total+=has[i];}
}
if(dd==n){cout<<"YES\n";}
else{//deb(total);
if(total>=mx-1){cout<<"YES\n";}
else{cout<<"NO\n";}
}


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