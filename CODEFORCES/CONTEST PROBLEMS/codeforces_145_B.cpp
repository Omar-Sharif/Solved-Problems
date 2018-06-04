#include<bits/stdc++.h>
using namespace std;

struct my
{
    int pos,value;
};
int cmp(my a,my b)
{
    return a.value<b.value;
}
vector<my>v;

int main()
{
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        int n,m,x;
        my p;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++){
           scanf("%d",&x);
            p.pos=i;
            p.value=x;
            v.push_back(p);
        }
        sort(v.begin(),v.end(),cmp);

       p=v[n-m];
      printf("%d\n",p.value);
        for(int i=n-m;i<n;i++){
            if(i==n-1) printf("%d\n",v[i].pos);
            else  printf("%d ",v[i].pos);
        }
        return 0;
}
