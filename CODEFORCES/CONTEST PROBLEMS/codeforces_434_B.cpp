#include<bits/stdc++.h>
using namespace std;

#define pii pair<double,double>
vector<pii>v;
vector<double>mn;
double ara[110];

int main()
{
    double n,m,k,f,cc,ff;
    cin>>n>>m;
    memset(ara,0,sizeof ara);

    for(int i=1;i<=m;i++){
        cin>>k>>f;
        v.push_back(pii(k,f));
        ara[int(k)]=f;
    }
    sort(v.begin(),v.end());

    for(int i=1;i<=100;i++){
            cc=1;
            for(int j=0;j<v.size();j++){
                k=v[j].first;
                f=v[j].second;
                ff=ceil(double(k)/double(i));
                if(ff!=f){
                    cc=0;
                    break;
                }
            }
            if(cc==1)mn.push_back(i);
    }
    //cout<<mn.size()<<endl;
    if(ara[int(n)]!=0)cout<<ara[int(n)]<<endl;
    else if(mn.size()>1 or mn.size()==0)cout<<-1<<endl;
    else{
        cc=mn[0];
        cc=ceil(double(n)/double(cc));
        cout<<cc<<endl;
    }
}
