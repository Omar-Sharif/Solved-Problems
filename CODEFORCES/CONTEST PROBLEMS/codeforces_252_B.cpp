#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,v;
    cin>>n>>v;
    long long sum=0,ara[3010],ara1[3010],m=v;
    for(int i=0;i<n;i++){
        cin>>ara[i]>>ara1[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ara[i]>ara[j]){
                ara[i]=ara[i]^ara[j];
                ara[j]=ara[i]^ara[j];
                ara[i]=ara[i]^ara[j];
                ara1[i]=ara1[i]^ara1[j];
                ara1[j]=ara1[i]^ara1[j];
                ara1[i]=ara1[i]^ara1[j];
            }
        }
    }

    for(int i=1;i<3005;i++){
            v=m;
        for(int j=0;j<n;j++){
            if(v==0)
                break;
            if(ara[j]==i-1&&ara1[j]>0&&v>0){
                //cout<<ara[j]<<' '<<i<<' '<<ara1[j]<<' ';
                if(ara1[j]>=v){
                    sum+=v;
                    ara1[j]=ara1[j]-v;
                    v=0;
                }
                else{
                    sum+=ara1[j];
                    v=v-ara1[j];
                    ara1[j]=0;
                }
            //cout<<sum<<endl;
            }
            if(ara[j]==i&&ara1[j]>0&&v>0){
              //      cout<<ara[j]<<' '<<i<<' '<<ara1[j]<<' ';
                if(ara1[j]>=v){
                    sum+=v;
                    ara1[j]=ara1[j]-v;
                    v=0;
                }
                else{
                    sum+=ara1[j];
                    v=v-ara1[j];
                    ara1[j]=0;
                }
                //cout<<sum<<endl;
            }
        }
    }
    cout<<sum<<endl;
}
