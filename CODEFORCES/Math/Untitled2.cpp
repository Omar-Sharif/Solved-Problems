#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    while(cin>>k){
        int ara[12];
        for(int i=0;i<12;i++)
            cin>>ara[i];
        sort(ara,ara+12,greater<int>());
        int sum=0,n=0;
        if(k==0){
            cout<<n<<endl;
        }
        else{
                int flag=0;
        for(int i=0;i<12;i++)
        {
            sum=sum+ara[i];
            if(sum<k){
                n++;
            }
            else if(sum>=k){
                n++;
                flag=1;
                break;
            }
        }
        if(flag!=1)
            cout<<-1<<endl;
        else
            cout<<n<<endl;
        }

    }
    return 0;
}

