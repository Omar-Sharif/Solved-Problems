#include<bits/stdc++.h>
using namespace std;
int seive(int n)
{
    if(n%2==0&&n!=2)
        return 1;
    else{
        int x=sqrt(n);
        for(int i=3;i<=x;i+=2){
            if(n%i==0)
                return 1;
        }
    }
    return 2;
}
int main()
{
    string s;
    while(cin>>s){
         int sum=0;
         for(int i=0;s[i]!=NULL;i++){
         if(s[i]>='a'&&s[i]<='z')
            sum+=s[i]-'a'+1;
         else
            sum+=s[i]-'A'+27;
         }
        if(seive(sum)==2)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
}
