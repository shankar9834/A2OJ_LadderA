#include<bits/stdc++.h>
using namespace std;
void maxi(int &a,int b)
{
    a=max(a,b);
}
void mini(int &a,int b)
{
    a=min(a,b);
}
int main()
{int mx=2*1000*1000*1000;
int mn=(-1)*mx;
    int n;
    cin>>n;
    while(n--)
    {
         string s;
         int x;
         string k;
    cin>>s;
    cin>>x;
    cin>>k;
    if(k=="N")
    {
        if(s==">") s="<=";
        else if(s=="<") s=">=";
        else if(s==">=") s="<";
        else {s=">";}
    }

    if(s==">") maxi(mn,x+1);
    else if(s==">=") maxi(mn,x);
    else if(s=="<") mini(mx,x-1);
    else{mini(mx,x);}


    }
    if(mn<=mx){cout<<mn<<endl;}
    else{
        cout<<"Impossible"<<endl;
    }
   
}