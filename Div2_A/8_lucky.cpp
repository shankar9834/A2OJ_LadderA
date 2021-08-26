 #include<bits/stdc++.h>

 using namespace std;
 int main()
 {
 string s;
 cin>>s;bool flag=0;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]!='4'&&s[i]!='7'){flag=1;break;}
  } long long num=0;
  for(int i=0;i<s.length();i++)
  {num=num*10+(int)s[i]-48;
      
  }
  if(flag==1){
      if(num%4==0||num%7==0){cout<<"YES\n";}
      else{cout<<"NO\n";}
     
  } else if(flag==0){
          cout<<"YES\n";
      }
      
 }