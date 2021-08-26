 #include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;int sum_total=0;
int a[n];int p[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
 sum_total+=a[i];  
}

sort(a,a+n);
for(int i=0;i<n;i++)
{
     p[0]=a[0];
    if(i>0){p[i]=p[i-1]+a[i];}
}
for(int i=0;i<n;i++)
{
    if(p[i]>(sum_total-p[i])){
        cout<<n-i<<endl;break;
    }
    else if(p[i]==(sum_total-p[i]) ){
        cout<<min(n-(i-1),n-i)<<endl;break;
    }
    
}



return 0;
}