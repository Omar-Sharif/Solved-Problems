#include<bits/stdc++.h>
using namespace std;
vector<int>v[110];
int main()
{
    int n,m;
    while(cin>>n>>m){
        long x,max;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    cin>>x;
                v[i].push_back(x);
            }
            sort(v[i].begin(),v[i].end());
        }
         max=v[0][0];
        for(int i=0;i<n;i++){
                //cout<<v[i][0]<<endl;
            if(v[i][0]>max){
                max=v[i][0];
            }
        }
        cout<<max<<endl;
        for(int i=0;i<105;i++)v[i].clear();
    }
}
