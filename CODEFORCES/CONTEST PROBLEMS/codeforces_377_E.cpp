#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define mx 200010
#define lli long long

map<int,int>my;
vector<int>vec[mx];
vector<pii>socket;
int nada[mx],pos[mx];

int main()
{
    int n,m,a,b,c,d,idx=0;

    while(cin>>n>>m){

        for(int i=1;i<=n;i++){
            scanf("%d",&a);
            if(my[a]==0)my[a]=++idx;
            vec[my[a]].push_back(i);
        }

        for(int i=1;i<=m;i++){
            scanf("%d",&a);
            socket.push_back(pii(a,i));
        }

        int low=0,high=socket.size();
        int sum=0,ans=0,sr=0,f=1;

        while(f){
            f=0;
            sort(socket.begin()+low,socket.begin()+high);
            for(int i=low;i<high;i++){
                a=socket[i].first;
                b=socket[i].second;
                c=my[a];
               // cout<<a<<' '<<b<<' '<<c<<' '<<vec[c].size()<<endl;
                if(vec[c].size()>0){
                    d=vec[c].back();
                    vec[c].pop_back();
                    pos[d]=b;
                    nada[b]=sr;sum+=sr;ans++;
                }
                else if(a>1){
                    f=1;
                    socket.push_back(pii((a+1)/2,b));
                }
            }
            low=high,high=socket.size();
            sr++;
        }

        printf("%d %d\n",ans,sum);
        for(int i=1;i<=m;i++)printf("%d ",nada[i]); printf("\n");
        for(int i=1;i<=n;i++)printf("%d ",pos[i]); printf("\n");
    }
}
