#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 200010

stack<int>ss;

struct st
{
    int v,idx;
}ara[mx];
bool cmp(st a,st b)
{
    return a.v<b.v;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&ara[i].v);
        ara[i].idx=i;
    }
    sort(ara+1,ara+n+1,cmp);

    string s;
    cin>>s;

    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            count++;
            printf("%d ",ara[count].idx);
            ss.push(ara[count].idx);
        }
        if(s[i]=='1'){
            int x=ss.top();
            ss.pop();
            printf("%d ",x);
        }
    }
}

