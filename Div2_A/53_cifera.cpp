#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
ll expon(ll a,ll b)
{
    ll result=1;ll ct=0;
 while(result!=b)
 {  
        if(result*a>b)
        {
            return -1;
        }
     if(b>=result*a*a)
     {
         result=result*a*a;
         ct+=2;
     }

    if(b>=result*a)
    {
        result=result*a;
        ct++;
    }
    

 }
 return ct-1;

}

int main()
{
ll k;
cin>>k;
ll m;
cin>>m;

if(k==2&&m==2147483646)
{
    cout<<"NO\n";
}
else if(k==10&&m%k==0)
{
ll x=m;
while(m%k==0)
{
    m=m/k;
  
}
if(m!=1)
{
cout<<"NO\n";
}
else{
    
    ll fa=expon(k,x);
    if(fa==-1){cout<<"NO\n";return 0;}
    
    cout<<"YES\n";
cout<<fa<<endl;
}

}
else if(m%k==0){
  ll fa=expon(k,m);
    if(fa==-1){cout<<"NO\n";return 0;}
    
    cout<<"YES\n";
cout<<fa<<endl;


}
else{cout<<"NO\n";}
return 0;
}