#include<bits/stdc++.h>
using namespace std;

#define mx 100010
int ara1[mx];
bool ara[mx];
int my[510][510];

void seive()
{
    ara[1]=1;
    int sq=sqrt(mx);
    for(int i=4;i<=mx;i+=2)
        ara[i]=1;

    for(int i=3;i<=sq;i+=2){
        if(ara[i]==0){
            for(int j=i*i;j<=mx;j+=2*i)
                ara[j]=1;
        }
    }
}

void save()
{
    int value=0;
    for(int i=100003;i>=1;i--){
        if(ara[i]==0){
            ara1[i]=0;
            value=i;
        }
        else{
            ara1[i]=value-i;
        }
    }
}

int main()
{
    seive();
    save();
    int n,m;
    while(cin>>n>>m)
    {
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>my[i][j];
        }

        int mi=100000000;

        for(int i=0;i<n;i++){
                int sum=0;
            for(int j=0;j<m;j++){
                sum+=ara1[my[i][j]];
            }
            mi=min(sum,mi);
        }

        for(int j=0;j<m;j++){
                int sum=0;
            for(int i=0;i<n;i++){
                sum+=ara1[my[i][j]];
            }
            mi=min(sum,mi);
        }
        cout<<endl<<mi<<endl;
    }
}
