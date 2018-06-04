#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d;
    while(cin>>a>>b>>c>>d){
        long long int ara[4],count=0;
        ara[0]=a;ara[1]=b;ara[2]=c;ara[3]=d;
        for(int i=0;i<4;i++){
                int flag=0;
                for(int k=0;k<i;k++){
                    if(ara[i]==ara[k])
                        flag=1;
                }
                if(flag!=1){
                        for(int j=i+1;j<4;j++){
                            if(ara[i]==ara[j])
                                count++;
                        }
                }

        }
        cout<<count<<endl;

    }
}
