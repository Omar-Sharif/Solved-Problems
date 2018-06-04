#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int ara[n];
        int cnt=0;
        for(int i=0;i<n;i++)
            cin>>ara[i];
            int flag;
            int count1=0;
        for(int i=0;i<n;i++){
                flag=0;
                int count=0;
            for(int j=0;j<i;j++){
                if(ara[j]==ara[i]){
                    flag=1;
                    break;
                }
            }
        if(flag!=1){
            for(int j=0;j<n;j++){
                if(ara[j]==ara[i]){
                    count++;
                }
            }
            if(count>count1)
                count1=count;
            cnt++;
        }
    }

        cout<<count1<<' '<<cnt<<endl;

    }
}
