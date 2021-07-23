#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int main()
{
fastio();
 ll on=0;

 ll n,k;
 cin>>n>>k;
 if(n%2==0)
 {
    on=n/2;
 }
 else{on=(n+1)/2;}
 if(k>on)
 {
     k=k-on;
     cout<<2+(k-1)*2<<endl;
 
 }
 else
 {
     cout<<1+(k-1)*2<<endl;
 
 }


return 0;
}