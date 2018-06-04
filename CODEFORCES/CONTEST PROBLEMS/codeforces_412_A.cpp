#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int ara[1010],ara1[1010];
int main()
{
    int n;
    cin>>n;

    int f=0;
    for(int i=0;i<n;i++){
        cin>>ara[i]>>ara1[i];
        if(ara[i]!=ara1[i])f=1;
    }
    if(f==1){
        cout<<"rated"<<endl;
        return 0;
    }
    else{
        for(int i=1;i<n;i++){
            if(ara[i]<=ara[i-1]){
                f=1;
            }
            else{
                cout<<"unrated"<<endl;
                return 0;
            }
        }
        cout<<"maybe"<<endl;
    }
}
