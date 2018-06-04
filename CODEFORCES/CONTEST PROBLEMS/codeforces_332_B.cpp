#include<bits/stdc++.h>
using namespace std;
int araf[100010],arab[100010],araa[100010],arac[100010];

int main()
{
    int n,m,a,b,c,flag=0;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
            cin>>araf[i];
        a=araf[i];
        if(arac[a]!=0)
            flag=1;
        else
            arac[a]=i;
    }
    int flag1=0;
    for(int i=1;i<=m;i++){
        cin>>arab[i];
        a=arab[i];
        if(arac[a]==0){
            flag1=1;
        }
        if(flag1!=1){
            araa[i]=arac[a];
        }
    }

    if(flag1==1)
        cout<<"Impossible"<<endl;
    else if(flag==1)
        cout<<"Ambiguity"<<endl;
    else{
        cout<<"Possible"<<endl;
        for(int i=1;i<=m;i++){
            if(i==m)
                cout<<araa[i]<<endl;
            else
                cout<<araa[i]<<' ';
        }
    }
}
