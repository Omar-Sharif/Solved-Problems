#include<bits/stdc++.h>
using namespace std;

int c(int x)
{
    int res=0;
    while(x>0){
        res+=(x%10);
        x/=10;
    }
    return res;
}
vector<int>ans;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=100;i++){
        int v=n-i;
        if(v+c(v)==n){
            ans.push_back(v);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;;
}
