#include<bits/stdc++.h>
using namespace std;
int main()
{int a[104]={0};
    int n;
    cin>>n;
    int p;cin>>p;
    int ar1[p];
    for(int i=0;i<p;i++)
    {
        cin>>ar1[i];
        a[ar1[i]]=1;
    }
    int x;
    cin>>x;
    int ar2[x];
    for(int i=0;i<x;i++)
    {
        cin>>ar2[i];
         a[ar2[i]]=1;
    }
    int ct=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1){ct++;}
        else{cout<<"Oh, my keyboard!";break;}
    }
    if(ct==n)
    {
        cout<<"I become the guy.";
    }

}