#include<bits/stdc++.h>
using namespace std;

int ara[3][200020];
int main()
{
    string s,s1;
    while(cin>>s>>s1){
        int l1=s.size(),l2=s1.size();

        ara[0][0]=0;
        ara[1][0]=0;
        for(int i=0;i<l2;i++){
            ara[0][i+1]=ara[0][i];
            ara[1][i+1]=ara[1][i];
            if(s1[i]=='0')
                ara[0][i+1]++;
            else ara[1][i+1]++;
        }

        long long sum=0;

        for(int i=0;i<l1;i++){
       // cout<<ara[1][l2-(l1-i)+1]<<' '<<ara[1][i]<<endl;
        //cout<<ara[0][l2-(l1-i)+1]<<' '<<ara[0][i]<<endl;
            if(s[i]=='0')
                sum+=ara[1][l2-(l1-i)+1]-ara[1][i];
            else
                sum+=ara[0][l2-(l1-i)+1]-ara[0][i];
            //cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
}
