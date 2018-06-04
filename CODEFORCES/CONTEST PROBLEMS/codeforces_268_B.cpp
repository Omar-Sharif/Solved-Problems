#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
vector<pii>v,v1;
int p,q,r,l,coun=0;

int check(int a,int b)
{
    //cout<<"A "<<a<<' '<<b<<endl;
    int flag=0;
    for(int i=0;i<v.size();i++){

        int x=v[i].first,y=v[i].second;
       // cout<<x<<' '<<y<<endl;

        if((a>=x and a<=y) or (b>=x and b<=y)){
            cout<<a<<' '<<b<<' '<<x<<' '<<y<<endl;
            coun++;
            flag=1;
            break;
        }
    }
    return flag;
}

int main()
{

    while(cin>>p>>q>>l>>r){
        int a,b;
        for(int i=0;i<p;i++)
        {
            cin>>a>>b;
            v.push_back(pii(a,b));
        }

        for(int i=0;i<q;i++)
        {
            cin>>a>>b;
            v1.push_back(pii(a,b));
        }
        int y=0;
        for(int j=l;j<=r;j++){
                y=0;
        for(int i=0;i<v1.size();i++){
                a=v1[i].first+j;
                b=v1[i].second+j;
                y=check(a,b);
                if(y==1){
                        cout<<a-j<<' '<<b-j<<' '<<j<<endl;
                        break;
                }
            }
           // cout<<"J "<<j<<' '<<coun<<endl;
        }
    cout<<coun<<endl;
    }
}
