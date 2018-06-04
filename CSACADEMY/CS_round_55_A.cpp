#include<bits/stdc++.h>
using namespace std;

int room[110];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>room[i];

    int a,b,c;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        c=0;
        for(int j=1;j<=m;j++){
            if(room[j]>=a and room[j]<=b)c++;
        }
        cout<<c<<endl;
    }
}
