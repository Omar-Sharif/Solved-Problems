#include<bits/stdc++.h>
using namespace std;

int ara[5010][5];
char ara1[5010];

int main()
{
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++){
            cin>>ara1[i];
            cin>>ara[i][1]>>ara[i][2];
        }

        long long max=0;

        for(int i=1;i<=366;i++){
            //int a,b,c,d;
            int ma=0,fe=0;

            for(int j=1;j<=n;j++){

            if(i>=ara[j][1] and i<=ara[j][2]){
                    if(ara1[j]=='M')ma++;
                    else fe++;
                }
            }

            int x=min(ma,fe);
                if(x*2>max)max=x*2;
            }

        cout<<max<<endl;
    }
}

