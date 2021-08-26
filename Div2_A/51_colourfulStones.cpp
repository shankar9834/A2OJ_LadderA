#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int main()
{
string s;
cin>>s;
string t;
cin>>t;
int j=0;
for(int i=0;i<t.length();i++)
{
    if(t[i]==s[j])
    {
        j++;
    }
}

cout<<j+1<<endl;
return 0;
}