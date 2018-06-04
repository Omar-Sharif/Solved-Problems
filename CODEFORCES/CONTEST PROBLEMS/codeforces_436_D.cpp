#include<bits/stdc++.h>
using namespace std;

map<int,int>my,my1,my2;
int ara[200010],n;
set<int>s;

int main()
{
    int value=1,count=0;;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
        my[ara[i]]++;
    }

    for(int i=1;i<=n;i++){
        if(my[i]>=1)count+=my[i]-1;
        else s.insert(i);
    }
    cout<<count<<endl;
    for(int i=1;i<=n;i++){
        int x=*(s.begin());
        //cout<<x<<' '<<ara[i]<<' '<<my[ara[i]]<<endl;
        if(my[ara[i]]<=1){
            my1[ara[i]]=1;
            continue;
        }
        if(x<ara[i]){
            my[ara[i]]--;
            ara[i]=x;
            my1[x]=1;
            s.erase(x);
        }
        else{
            if(my1[ara[i]]==1){
                my[ara[i]]--;
                ara[i]=x;
                s.erase(x);
            }
            else my1[ara[i]]=1;
        }
    }
    for(int i=1;i<=n;i++)cout<<ara[i]<<' ';
}
