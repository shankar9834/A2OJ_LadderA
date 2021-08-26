#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int main()
{
int n,m,a,b;
cin>>n>>m>>a>>b;
if(n<m)
{
    if(n*a<=b){cout<<n*a<<endl;return 0;}
    else{cout<<b<<endl;return 0;}
}
if(m*a>=b)
{int a1=INT_MAX;
    int ans1=(n/m)*b+(n%m)*a;
    if(n%m==0){int ans2=(n/m)*b;}
    else{ a1=((n/m)+1)*b;}
    
    
    cout<<min(ans1,a1)<<endl;
}
else
{
    cout<<n*a<<endl;
}

return 0;
}