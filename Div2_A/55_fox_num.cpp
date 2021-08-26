#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<'='<<x<<endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
void solve()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int ar=a[0];
   for(int i=1;i<n;i++)
   {
       ar=__gcd(ar,a[i]);
   }
   cout<<n*ar<<endl;
} 
int main()
{
//fastio();
 #ifndef ONLINE_JUDGE
freopen(  "input.txt"   ,"r"  ,stdin);
freopen( "output.txt"    , "w"  ,stdout);
#endif 
solve();
return 0;
}