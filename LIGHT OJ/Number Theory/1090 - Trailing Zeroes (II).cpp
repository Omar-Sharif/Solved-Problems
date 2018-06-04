#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
int sum2[1000010],sum5[1000010];

pii check()
{
    vector<int>v;
    v.push_back(2);v.push_back(3);v.push_back(5);

    for(int j=1;j<=1000000;j++){
        int count1=0,count2=0;
        for(int i=0;i<v.size();i++){
            int value=j;
            if(value%v[i]==0){
                while(value%v[i]==0){
                    if(v[i]==2)count1++;
                    if(v[i]==5)count2++;
                    value/=v[i];
                }
            }
        }
        sum2[j]=count1+sum2[j-1];
        sum5[j]=count2+sum5[j-1];
    }
}

int main()
{
    check();
    int t,cs=0;
    scanf("%d",&t);

    while(t--){
        int n,r,p,q,x,t2=0,t5=0;
        scanf("%d %d %d %d",&n,&r,&p,&q);
        t2=((sum2[p]-sum2[p-1])*q)+sum2[n]-sum2[r]-sum2[n-r];
        t5=((sum5[p]-sum5[p-1])*q)+sum5[n]-sum5[r]-sum5[n-r];

        printf("Case %d: %d\n",++cs,min(t2,t5));
    }
}

