#include<bits/stdc++.h>
using namespace std;

int ara[100],ara1[100];

int main()
{
    int n,c;
    while(cin>>n>>c)
    {
        int t1=0,t2=0,sum1=0,sum2=0;
        for(int i=0;i<n;i++)cin>>ara[i];
        for(int i=0;i<n;i++)cin>>ara1[i];

        for(int i=0;i<n;i++)
        {
            t1+=ara1[i];
            sum1+=max(0,ara[i]-t1*c);
        }

        for(int i=n-1;i>=0;i--)
        {
            t2+=ara1[i];
            sum2+=max(0,ara[i]-t2*c);
        }
        //cout<<sum1<<' '<<sum2<<endl;
        if(sum1>sum2)cout<<"Limak"<<endl;
        else if(sum2>sum1)cout<<"Radewoosh"<<endl;
        else cout<<"Tie"<<endl;
    }
}
