#include<bits/stdc++.h>
using namespace std;

long long ara[25],n;
long long value[5000];
/*long long  my(int i,int s)
{
    //cout<<i<<' '<<s<<endl;
    if(i==n+1){
        return s;
    }
    long long profit1=0,profit2=0;
    if(ara[i]<0){
        return s;
        profit2=my(i+1,s);
    }
    profit1=my(i+1,s*ara[i]);

    //profit2=my(i+1,s);
    //cout<<i<<' '<<s<<' '<<profit1<<' '<<profit2<<endl;
    return max(profit1,profit2);
}*/
int main()
{
    int caseno=0;
    while(cin>>n){
            int pos=0,neg=0;
            //memset(ara,-1,sizeof(ara));
        for(int i=1;i<=n;i++){
            cin>>ara[i];
            if(ara[i]>0)
                pos++;
            else if(ara[i]<0)
                neg++;
        }
        int k=1;

        for(int i=1;i<=n;i++){
            value[k]=ara[i];
            k++;
            for(int j=i+1;j<=n;j++){
                value[k]=value[k-1]*ara[j];
                //cout<<ara[j]<<' '<<value[k]<<' '<<value[k-1]<<endl;
                k++;
            }
        }
        sort(value+1,value+k);
       /* for(int i=1;i<k;i++)
            cout<<value[i]<<' ';
        cout<<endl;*/
        long long sum;
        sum=value[k-1];
        if(sum<0)
            sum=0;
        printf("Case #%d: The maximum product is %lld.\n",++caseno,sum);
        cout<<endl;
    }
}
