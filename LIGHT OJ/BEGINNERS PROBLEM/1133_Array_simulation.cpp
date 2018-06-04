#include<bits/stdc++.h>
using namespace std;
vector<int>v;

int main()
{
    int t,caseno=0;
    cin>>t;
    while(t--){
        v.clear();
        int n,k,c,m,o;
        char ch;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>c;
            v.push_back(c);
        }

        for(int i=0;i<k;i++){
            cin>>ch;
            if(ch=='S'){
                cin>>m;
                for(int j=0;j<v.size();j++){
                    v[j]+=m;
                }
            }
            else if(ch=='M'){
                cin>>m;
                for(int j=0;j<v.size();j++){
                    v[j]*=m;
                }
            }
            else if(ch=='D'){
                cin>>m;
                for(int j=0;j<v.size();j++){
                    v[j]/=m;
                }
            }
            else if(ch=='R')
                reverse(v.begin(),v.end());
            else if(ch=='P'){
                cin>>m>>o;
                swap(v[m],v[o]);
            }
        }
        printf("Case %d:\n",++caseno);
        for(int i=0;i<v.size();i++){
            if(i==v.size()-1){
                cout<<v[i]<<endl;
            }
            else cout<<v[i]<<' ';
        }
    }
}
