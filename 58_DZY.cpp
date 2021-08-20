#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<'='<<x<<endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int binary_expo(int a,int b);
  
void solve()
{
   int n,m;
   cin>>n>>m;
   char ch[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>ch[i][j];
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
      {
          if(ch[i][j]=='.')
          {
              if((i+j)%2==0){ch[i][j]='W';}
              else{ch[i][j]='B';}
          }
      }}
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              cout<<ch[i][j];
          }
          cout<<endl;
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