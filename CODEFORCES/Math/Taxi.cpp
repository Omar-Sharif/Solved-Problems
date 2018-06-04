#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    while(cin>>n){
        int s[n];
        long c1=0,c2=0,c3=0,c4=0,i,count;
        for(i=0;i<n;i++){
            cin>>s[i];
            if(s[i]==1) c1++;
            else if(s[i]==2) c2++;
            else if(s[i]==3) c3++;
            else if(s[i]==4) c4++;
        }
        if(c3<c1) c1=c1-c3;
        else c1=0;
        int cnt=c2*2+c1;
        if(cnt%4==0) cout<<c3+c4+cnt/4<<endl;
        else cout<<c3+c4+cnt/4+1<<endl;
    }
    exit(0);
}

