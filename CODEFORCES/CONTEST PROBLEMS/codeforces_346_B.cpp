#include<bits/stdc++.h>
using namespace std;
struct my
{
    string s;
    int point;
};
vector<my>ara[10010];
bool cmp(my a,my b)
{
        return a.point>b.point;
}

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        string q;
        int a,b;
        my mmm;
        for(int i=1;i<=n;i++){
            cin>>q>>a>>b;
            mmm.s=q;
            mmm.point=b;
            ara[a].push_back(mmm);
        }

        for(int i=1;i<=m;i++){
            sort(ara[i].begin(),ara[i].end(),cmp);

            if(ara[i].size()>2){
                if(ara[i][1].point==ara[i][2].point){
                    cout<<'?'<<endl;
                }
                else{
                cout<<ara[i][0].s<<' '<<ara[i][1].s<<endl;
                }
            }
            else{
                cout<<ara[i][0].s<<' '<<ara[i][1].s<<endl;
            }
        }
    }
}
