#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,p,x,y;

    while(cin>>n>>k>>p>>x>>y){
        int ara[k];
        int ara1[n],sum=0;
        int flag=1;
        for(int i=0;i<k;i++){
            cin>>ara[i];
            sum+=ara[i];
        }
        sort(ara,ara+k);
       int  mid=(n+1)/2;
        int mid1=(k+1)/2;
        int j=0;
        if(ara[mid1]>=y){
            for(int i=k;i<n;i++){
                if(j%2==0){
                    ara1[j]=y;
                    sum+=ara1[j];
                }
                else{
                    ara1[j]=1;
                    sum+=ara1[j];
                }

            j++;
            }
        }
        else if(ara[mid1]<y){
            int x=mid-mid1;
            if(k+2*x>=n){
                flag==0;
            }
            if(flag!=0){
                    j=0;
            for(int i=mid;i<mid+2*x;i++){
                ara1[j]=y;
                sum+=ara1[j];
                j++;
            }
            for(int i=mid+2*x;i<n;i++){
                if(j%2==0){
                    ara1[j]=y;
                    sum+=ara1[j];
                }
                else{
                    ara1[j]=1;
                    sum+=ara1[j];
                }
            j++;
            }

        }
    }
    if(flag==0||sum>x)
            cout<<-1<<endl;
        else{
            for(int i=0;i<j;i++){
                if(i==j-1)
                    cout<<ara1[i]<<endl;
                else
                    cout<<ara1[i]<<' ';
            }

        }
}
return 0;
}
