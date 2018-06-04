#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ara[n+1];

    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    int count=0,sum,j ;

    for(int i=0;i<n;){
        sum=ara[i];
        for(j=i+1;j<n;){
            sum+=ara[j];
            if(sum<=m)
                j++;
            else
                break;
        }
        i=j;
        count++;
    }
    cout<<count<<endl;
}
