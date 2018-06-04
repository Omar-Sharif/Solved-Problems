#include<bits/stdc++.h>
using namespace std;

int ara[1010],ara1[1010];

bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        long long sum=0,sum1=0;
        for(int i=0;i<m;i++){
            cin>>ara[i];
            ara1[i]=ara[i];
        }

        sort(ara1,ara1+m);

        int count=0;

        for(int i=0;i<m;i++){
            //cout<<ara1[i]<<endl;
            if(count+ara1[i]>n){
                for(int j=ara1[i];j>=0;j--){
                    count++;
                    if(count>n)break;
                    sum+=j;
                }
                break;
            }
            else{
                count+=ara1[i];
                sum+=(ara1[i]*(ara1[i]+1))/2;
            }
        }
        //cout<<count<<' '<<sum<<endl;

        sort(ara,ara+m,cmp);

        count=0;

        for(int i=0;i<m;){
            count++;
           // cout<<ara[i]<<endl;
            if(count>n)break;
            sum1+=ara[i];
            ara[i]=ara[i]-1;
            sort(ara,ara+m,cmp);
        }
        //cout<<count<<' '<<sum1<<endl;

        cout<<sum1<<' '<<sum<<endl;


    }
}

