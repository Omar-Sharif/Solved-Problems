#include<bits/stdc++.h>
using namespace std;
 char ara[110][110];
int main()
{
    int n;

    while(cin>>n)
    {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>ara[i][j];
            }
        }

        long long sum=0;

        for(int i=1;i<=n;i++){
                int count=0,count2=0;
            for(int j=1;j<=n;j++){
                if(ara[i][j]=='C')
                    count++;
                    if(ara[j][i]=='C')
                        count2++;
            }
            //cout<<count<<' '<<count2<<endl;
            sum+=(count*(count-1))/2;
             sum+=(count2*(count2-1))/2;
        }
        cout<<sum<<endl;


    }
}
