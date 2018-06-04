#include<bits/stdc++.h>
using namespace std;

#define mx 10010
vector<int>v;
bool vis[mx];
int ara[mx];


void seive()
{
    vis[1]=1;
    for(int i=2;i<mx;i++){
        if(vis[i]==1)continue;
        for(int j=i*i;j<mx;j+=i){
            vis[j]=1;
        }
    }

    v.push_back(2);
    for(int i=3;i<mx;i+=2){
        if(vis[i]==0)v.push_back(i);
    }
}

string multiply( string a, int b ) {
    int carry = 0;
    reverse(a.begin(),a.end());
    for( int i = 0; i < a.size(); i++ ) {
        carry += (a[i] - 48) * b;
        a[i] = ( carry % 10 + 48 );
        carry /= 10;
    }
    while( carry ) {
        a += ( carry % 10 + 48 );
        carry /= 10;
    }
    reverse(a.begin(),a.end());
    return a;
}

int check(int x,int b)
{
    int count=1;
    while(x%b==0){
        count*=b;
        x/=b;
    }
    return count;
}

int main()
{
    seive();
    int t,cs=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&ara[i]);
        }
        sort(ara+1,ara+n+1);

        string ans="1";

        for(int i=0;i<v.size();i++){
            int mxx=1;
            for(int j=n;j>=1 and ara[j]>=v[i];j--){
                mxx=max(mxx,check(ara[j],v[i]));
            }
            ans=multiply(ans,mxx);
        }

        printf("Case %d: ",++cs);
        cout<<ans<<endl;
        ans.clear();
    }
}
