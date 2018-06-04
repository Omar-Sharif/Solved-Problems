#include<bits/stdc++.h>
using namespace std;
#define lli long long
lli ara[2010],n,m,mi,mx;
map<int,lli>my;

lli check()
{
    lli c=-1;
    for(int i=1;i<=m;i++){
       if(my[i]<mi){
            my[i]++;
            c=i;
            break;
        }
    }
    return c;
}
int main()
{
    while(cin>>n>>m){
        for(int i=0;i<n;i++)
            cin>>ara[i];
        mi=(n/m);

        for(int i=0;i<n;i++){
            my[ara[i]]++;
        }

        int count=0;
        for(int i=0;i<n;i++){
            if(ara[i]>m){
                lli c=check();
                if(c!=-1){
                    ara[i]=c;
                    count++;
                }
            }
            else if(my[ara[i]]>mi){
                lli c=check();
                if(c!=-1){
                    my[ara[i]]--;
                    ara[i]=c;
                    count++;
                }
            }
        }
        cout<<mi<<' '<<count<<endl;
        for(int i=0;i<n;i++){
            if(i==n-1)cout<<ara[i]<<endl;
            else cout<<ara[i]<<' ';
        }
    }
}


