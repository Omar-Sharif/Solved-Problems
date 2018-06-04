#include<bits/stdc++.h>
using namespace std;
map<string,int>my;

void check()
{
    my["red"]=1;
    my["yellow"]=2;
    my["green"]=3;
    my["brown"]=4;
    my["blue"]=5;
    my["pink"]=6;
    my["black"]=7;
}
int main()
{
    check();
    int sum=0,mx=0,c=0;
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="red")c++;
        sum+=my[s];
        mx=max(mx,my[s]);
    }
    if(mx==1)cout<<1<<endl;
    else cout<<sum+c*mx<<endl;
}
