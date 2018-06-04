#include<bits/stdc++.h>
using namespace std;

struct team
{
    int a,b,c,point;
};

vector<team>v;
vector<int>teammate[1010];
map<int,bool>my;

int cmp(team a,team b)
{
    return a.point>b.point;
}

int main()
{
    int n,x;
    while(cin>>n)
    {
        team t;
        for(int k=2;k<=2*n;k++){
            for(int i=1;i<k;i++){
                cin>>x;
                t.a=k;t.b=i;t.point=x;
                v.push_back(t);
            }
        }

        sort(v.begin(),v.end(),cmp);

        int p,q,r,count=0;

        for(int i=0;i<v.size();i++){
            t=v[i];
            p=t.a;q=t.b;r=t.point;
            if(my[p]==0 and my[q]==0){
                teammate[p].push_back(q);
                teammate[q].push_back(p);
                my[p]=1;
                my[q]=1;
            }
        }

        for(int i=1;i<=2*n;i++){
            if(i==2*n)cout<<teammate[i][0]<<endl;
            else cout<<teammate[i][0]<<' ';
        }
    }
}

