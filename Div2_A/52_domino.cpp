#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int main()
{
int n;
cin>>n;
int x[n];
int y[n];
int odx=0,ody=0;
int sumx=0,sumy=0;
for(int i=0;i<n;i++)
{
    cin>>x[i]>>y[i];
    sumx+=x[i];
    sumy+=y[i];
    if(x[i]%2!=0)
    {
        odx++;
    }
    if(y[i]%2!=0){ody++;}
}
if(ody%2==0&&odx%2==0||(sumx%2==0&&sumy%2==0)){cout<<0<<endl;return 0;}
if((ody%2==0&&odx%2!=0)||(odx%2==0&&ody%2!=0)){cout<<-1<<endl;return 0;}

for(int i=0;i<n;i++)
{
    if((x[i]%2==0&&y[i]%2!=0)||(y[i]%2==0&&x[i]%2!=0)){cout<<1<<endl;return 0;}
}
cout<<-1<<endl;

return 0;
}