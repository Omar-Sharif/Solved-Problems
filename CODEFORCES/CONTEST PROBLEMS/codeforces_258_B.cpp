#include<bits/stdc++.h>
using namespace std;

#define max 100010
#define pii pair<int,int>
long long ara[max];
stack<pii>q;
int n;

int check(int x,int y)
{
    int flag=1;
    int i=x,j=y;
   while(i<=j){
        swap(ara[i],ara[j]);
        i++;
        j--;
   }
    for(int i=2;i<=n;i++){
        if(ara[i]<ara[i-1]){
            flag=0;
            int i=x,j=y;
        while(i<=j){
            swap(ara[i],ara[j]);
            i++;
            j--;
            }
            break;
        }
    }
    return flag;
}
int func(int x)
{
    for(int j=n;j>x;j--){
        if(ara[j]<ara[x]){
            q.push(pii(x,j));
            int y=check(x,j);
            if(y==0){
                q.pop();
            }
            else{
                return -1;
            }
            break;
        }
    }
}

int main()
{
    while(cin>>n)
    {
        for(int i=1;i<=n;i++){
            cin>>ara[i];
        }
        q.push(pii(1,1));

        int x=-1;
        for(int i=1;i<n;i++){
            if(ara[i]>ara[i+1]){
                x=func(i);
                if(x==-1)break;
                break;
            }
        }

        if(x!=-1)cout<<"no"<<endl;
        else{
            pii a;
            cout<<"yes"<<endl;
            a=q.top();q.pop();
            cout<<a.first<<' '<<a.second<<endl;
        }
    }
    return 0;
}
