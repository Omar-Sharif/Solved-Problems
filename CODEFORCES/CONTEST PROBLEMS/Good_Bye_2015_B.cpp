#include<bits/stdc++.h>
using namespace std;
long long ara[100];
void save()
{
    long long j=2;
    for(int i=2;i<=63;i++){
        ara[i]=j;
        j*=2;
    }
    ara[1]=1;
}

int main()
{
    long long n,m,i,j,k,count,c;
    save();
    while(cin>>n>>m){
        if(n==1 and m==1){
            cout<<0<<endl;
            return 0;
        }
        for(i=2;i<64;i++){
            if(ara[i]>=m){
                break;
            }
        }
        count=ara[i];
        long long vari=i;
       count=count-1;
       c=0;
       j=1;
       if(count==1)
        c=1;
       for(k=count;k>=n;){
            k=count-j;
            //cout<<k<<' '<<count<<endl;
            if(k<n)break;
            if(k>=n and k<=m){
                c++;
            }
            j*=2;
            if(count-j<ara[vari-1]){
                vari--;
                count=ara[vari]-1;
                j=1;
                if(vari<2)
                break;
            }
       }
       cout<<c<<endl;
    }
}

