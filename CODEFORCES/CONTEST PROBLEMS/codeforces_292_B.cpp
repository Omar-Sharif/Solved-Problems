#include<bits/stdc++.h>
using namespace std;

map<int,bool>boy,girl;

int main()
{
    int n,m,b,g,x,y;

    while(cin>>n>>m){
        cin>>b;
        for(int i=0;i<b;i++){
            cin>>x;
            boy[x]=1;
        }
        cin>>g;

        for(int i=0;i<g;i++){
            cin>>x;
            girl[x]=1;
        }

        for(int i=0;i<10000;i++){
            x=i%n;y=i%m;
            if(boy[x]==1 or girl[y]==1){
                boy[x]=1;
                girl[y]=1;
            }
        }
        int flag=0;

        for(int i=0;i<n;i++){
                //cout<<boy[i]<<endl;
            if(boy[i]!=1){
                flag=1;
                break;
            }
        }

        for(int i=0;i<m and flag==0;i++){
               // cout<<girl[i]<<endl;
            if(girl[i]!=1){
                flag=1;
                break;
            }
        }
        //cout<<flag<<endl;

        if(flag==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
