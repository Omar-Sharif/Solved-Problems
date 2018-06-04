#include<bits/stdc++.h>
using namespace std;

int n;
int res[10010][110];

struct st
{
    int l,pos;
}ara[110];

bool cmp(st a,st b)
{
    if(a.l>b.l)return true;
    else if(a.l==b.l){
        if(a.pos<b.pos)return true;
        else return false;
    }
    else return false;
}

int check()
{
    int c=0,a=ara[1].l;
    for(int i=1;i<=n;i++){
        if(ara[i].l!=a){
            break;
        }
        c++;
    }
    return c;
}

int ck(int row,int c)
{
    vector<int> vec;
    if(c==1) c=2;
    else if(c>5 and (c%2==0)) c=4;
    else if(c>5 and (c%2!=0)) c=5;

    for(int i=1;i<=c;i++)
     vec.push_back(ara[i].pos);

    for(int i=1;i<=c;i++) if(ara[i].l>0) ara[i].l-=1;
    for(int i=0;i<vec.size();i++) res[row][vec[i]]=1;
}

int main()
{
    while(cin>>n){
        for(int i=1;i<=n;i++){
            cin>>ara[i].l;
            ara[i].pos=i;
        }

        sort(ara+1,ara+n+1,cmp);
        int c,x=1;

        while(1)
        {
            sort(ara+1,ara+n+1,cmp);
            c=check();
            if(c==n)break;
            ck(x,c);
            x++;
        }

        cout<<ara[1].l<<endl<<x-1<<endl;
        for(int i=1;i<x;i++){
            for(int j=1;j<=n;j++)
                cout<<res[i][j];
            cout<<endl;
        }
    }
}
