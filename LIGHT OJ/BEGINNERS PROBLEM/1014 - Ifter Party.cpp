#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int main()
{
    int t;
    scanf("%d",&t);

    for(int c=1;c<=t;c++){
        int p,l,q,i;
        scanf("%d %d",&p,&l);
        q=p-l;

        for(i=1;i<=sqrt(q);i++){
            if(q%i==0){
                if(i>l)
                v.push_back(i);
                if((q/i)>l and i*i!=q)
                v.push_back(q/i);
            }
        }
        if(v.size()==0)printf("Case %d: impossible\n",c);
        else{
            sort(v.begin(),v.end());
            printf("Case %d:",c);
            for(int i=0;i<v.size();i++)printf(" %d",v[i]);
            cout<<endl;
        }
        v.clear();
    }
}
