#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int main()
{
fastio();
 int x1,y1,x2,y2;
 cin>>x1>>y1>>x2>>y2;
 if(x1!=x2&&y1==y2)
 {
     cout<<x1<<" "<<y1+abs(x2-x1)<<" "<<x2<<" "<<y2+abs(x2-x1)<<endl;
 }
 else if(y1!=y2&&x1==x2)
 {
     cout<<x1+abs(y2-y1)<<" "<<y1<<" "<<x2+abs(y2-y1)<<" "<<y2<<endl;
 }
 else if((x2-x1)==(y2-y1)|| (x2-x1)+(y2-y1)==0)
 {
     cout<<x1<<" "<<y1+(y2-y1)<<" "<<x2<<" "<<y2-(y2-y1)<<endl;
 }
 else{
     cout<<-1<<endl;
 }
return 0;
}