#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int main()
{

int n,m;
cin>>n>>m;


int max[m+2];
memset(max,INT_MIN,sizeof(max));

string s[n];
for(int i=0;i<n;i++)
{
    cin>>s[i];
  
}
 for(int i=0;i<n;i++)
{
      for(int j=0;j<s[i].length();j++)
    {
        if((int)s[i][j]>max[j]) 
        {max[j]=(int)s[i][j];}
    }
}


int num=0;

for(int i=0;i<n;i++)
{
    for(int j=0;j<s[i].length();j++)
    {
        if((int)s[i][j]>=max[j]) 
        {num++;break;}
    }
} 

cout<<num<<endl;

return 0; 



}
