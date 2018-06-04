#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long x,y,sum;
   while(cin>>x>>y){
         string s,s1,s2;
        sum=0;
        int i=32;
        while(i>0){
            s+=(x%2)+'0';
            x=x/2;
            i--;
        }
        i=32;
        while(i>0){
            s1+=(y%2)+'0';
            y=y/2;
            i--;
        }
        reverse(s.begin(),s.end());
        reverse(s1.begin(),s1.end());
        int o=s.length();
        int p=s1.length();
        for(int i=0;i<32;i++){
            if((s[i]=='1'&&s1[i]=='0')||(s[i]=='0'&&s1[i]=='1'))
                s2+=1+'0';
            else if((s[i]=='0'&&s1[i]=='0')||(s[i]=='1'&&s1[i]=='1'))
                s2+=0+'0';
            else if(o>p)
                s2+=s[i];
            else if(p>o)
                s2+=s1[i];
            else
                s2+=0+'0';
        }
        int j=0;
        for(int i=31;i>=0;i--){
            int k=s2[i]-'0';
            sum+=k*pow(2,j);
            j++;
        }
        cout<<sum<<endl;
   }
   return 0;
}
