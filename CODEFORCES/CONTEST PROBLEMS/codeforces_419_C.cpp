#include<bits/stdc++.h>
using namespace std;

int ara[110][110],n,m;
vector<string>v;

int find_min(int i)
{
    int mn =510;
    for(int j=1;j<=m;j++)mn=min(mn,ara[i][j]);
    for(int j=1;j<=m;j++)ara[i][j]-=mn;
    return mn;
}
int find_min2(int i)
{
    int mn=510;
    for(int j=1;j<=n;j++)mn=min(mn,ara[j][i]);
    for(int j=1;j<=n;j++)ara[j][i]-=mn;
    return mn;
}
int check_row()
{
    int c=0;
    for(int i=1;i<=n;i++){
        c=find_min(i);
        for(int j=1;j<=c;j++){
            int d=i;
            string s1,s="row ";
            while(d!=0){
                s1+=(d%10)+'0';
                d/=10;
            }
            reverse(s1.begin(),s1.end());
            s+=s1;
            v.push_back(s);
        }
    }
}
int check_col()
{
    int c=0;
    for(int i=1;i<=m;i++){
        c=find_min2(i);
        for(int j=1;j<=c;j++){
            int d=i;
            string s1,s="col ";
            while(d!=0){
                s1+=(d%10)+'0';
                d/=10;
            }
            reverse(s1.begin(),s1.end());
            s+=s1;
            v.push_back(s);
        }
    }
}
int final_check()
{
    int flag=0;
     for(int i=1;i<=n and flag==0;i++){
        for(int j=1;j<=m;j++){
            if(ara[i][j]!=0){
                flag=1;
                break;
            }
        }
    }
    return flag;
}
int print()
{
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cin>>ara[i][j];
    }
    if(n<=m){
        check_row();
        check_col();
    }
    else{
        check_col();
        check_row();
    }
    int c=final_check();
    if(c==1)cout<<-1<<endl;
    else print();
}
