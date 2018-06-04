#include<bits/stdc++.h>
using namespace std;

struct st
{
    int point,index;
}ara[110];
bool cmp(st a,st b)
{
    if(a.point>b.point)return true;
    else if(a.point==b.point){
        return a.index<b.index;
    }
    else return false;
}
vector<int>v[110];
int value[110],n;
int check(int x,int y)
{
    //cout<<x<<' '<<y<<' '<<n<<endl;
    int mi=-1,mx=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[x][i]==v[y][j]){
                mi=v[x][i];
                break;
            }
        }
        if(mi!=-1)break;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(v[x][i]==v[y][j]){
                mx=v[x][i];
                break;
            }
        }
        if(mx!=-1)break;
        //cout<<mx<<endl;
    }
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(v[x][i]<mi or v[x][i]>mx)count1++;
        if(v[y][i]<mi or v[y][i]>mx)count2++;
    }
   // cout<<"SS "<<x<<' '<<y<<' '<<mi<<' '<<mx<<endl;
    //cout<<count1<<' '<<count2<<endl;
    if(count1==count2)value[x]++,value[y]++;
    else if(count1>count2)value[x]+=2;
    else value[y]+=2;
}
int main()
{
    int x;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=1;i<=n;i++)sort(v[i].begin(),v[i].end());

    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            check(i,j);
        }
    }
    for(int i=1;i<=n;i++){
       // cout<<i<<' '<<value[i]<<endl;
        ara[i].point=value[i];
        ara[i].index=i;
    }
    sort(ara+1,ara+n+1,cmp);
    for(int i=1;i<=n;i++){
        cout<<ara[i].index<<endl;
    }


}
