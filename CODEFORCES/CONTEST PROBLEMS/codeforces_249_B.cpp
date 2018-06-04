#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    int k;
    while(cin>>s>>k){

        int l=s.length(),pos;
        int max,max1;

        for(int i=0;i<l;i++){
                max=s[i]-'0';
                pos=-1;
            //cout<<max<<' '<<i<<endl;
            for(int j=i+1;j<=i+k&&j<l;j++){
                max1=s[j]-'0';
                if(max1>max){
                    max=max1;
                    pos=j;
                }
            }
            //cout<<pos<<' '<<max<<endl;;
            for(int m=pos;m>i;m--){
                s[m]=s[m-1];
            }
            s[i]=max+'0';
            //cout<<s<<endl;
            if(pos!=-1)k=k-(pos-i);
        }
        cout<<s<<endl;
    }
}
