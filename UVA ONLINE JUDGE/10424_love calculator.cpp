#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    s="abcdefghijklmnopqrstuvwxyz";

    while(getline(cin,s1)){
        getline(cin,s2);
        cout<<s1<<endl;
        cout<<s2<<endl;
        int count=0,count1=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]>='A'&&s1[i]<='Z')
               s1[i]=s1[i]+32;
            if(s1[i]>='a'&&s1[i]<='z'){
                for(int j=0;j<26;j++){
                    if(s1[i]==s[j])
                        count+=j+1;
                }
            }
        }
        for(int i=0;i<s2.size();i++){
             if(s2[i]>='A'&&s2[i]<='Z')
               s2[i]=s2[i]+32;
            if(s2[i]>='a'&&s2[i]<='z'){
                for(int j=0;j<26;j++){
                    if(s2[i]==s[j])
                        count1+=j+1;
                }
            }
        }
        cout<<count1<<' '<<count<<endl;
        int a=0,b=0;
        while(1){
            while(count>0){
                cout<<count<<endl;
                a+=count%10;
                count=count/10;
            }
            if(a<10)
                break;
            else{
              count=a;
                a=0;
            }
            cout<<count<<endl;
        }
         while(1){
            while(count1>0){
                cout<<count1<<endl;
                b+=count1%10;
                count1=count1/10;
            }
            if(b<10)
                break;
            else{
              count1=b;
                b=0;
            }
            cout<<count1<<endl;
        }
        cout<<a<<' '<<b<<endl;
        int m=max(a,b);
        int n=min(a,b);
        float result=float((n*100))/float(m);
        if(n==0||m==0)
            result=0;
        if(m==0&&n==0)
            cout<<endl;
        else
        printf("%.2f %\n",result);
        //getchar();
}
}
