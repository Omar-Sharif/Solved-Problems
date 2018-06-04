#include<bits/stdc++.h>
using namespace std;

vector<int>v[100010];

int main()
{
    int n,m,k,x;

    while(cin>>n>>k)
    {
        for(int i=0;i<k;i++){
            cin>>m;
            for(int j=0;j<m;j++){
               cin>>x;
               v[i].push_back(x);
            }
        }

        long long count=0,c=1;
        int x,y;
        for(int i=0;i<k;i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]==1){
                    x=i;y=j;
                    break;
                }
            }
        }
        for(int i=y;i<v[x].size()-1;i++){
            if(v[x][i+1]-v[x][i]==1){
                c++;
            }
            else break;
        }
        count+=2*n-k-2*c+1;
        cout<<count<<endl;
    }
}
