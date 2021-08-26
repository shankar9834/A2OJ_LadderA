#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<'='<<x<<endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int binary_expo(int a,int b);
 int gcd(int a,int b)
 { if(b==0) return a;

     return gcd(b,a%b);
 } 
void solve()
{
   int a,b,c;
   cin>>a>>b>>c;
   int a1=sqrt(a*b/c);
   int a2=sqrt(a*c/b);
   int a3=sqrt(b*c/a);
   cout<<(a1+a2+a3)*4<<endl;
       
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