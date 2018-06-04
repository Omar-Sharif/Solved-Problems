#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int k1,k2,j;
        cin>>k1;
        vector<int>v1,v2,v3,v4;
        for(int i=1;i<=k1;i++){
            cin>>j;
            v1.push_back(j);
        }
        v3=v1;
        cin>>k2;
        for(int i=1;i<=k2;i++){
            cin>>j;
            v2.push_back(j);
        }
        for(int i=1;;i++){
            if(v1[0]>v2[0]){
                v1.push_back(v2[0]);
                v1.push_back(v1[0]);
                v1.erase(v1.begin());
                v2.erase(v2.begin());
            }
            else{
                v2.push_back(v1[0]);
                v2.push_back(v2[0]);
                v1.erase(v1.begin());
                v2.erase(v2.begin());
            }
            if(v1.size()==0){
                cout<<i<<' '<<2<<endl;
                break;
            }
            else if(v2.size()==0){
                cout<<i<<' '<<1<<endl;
                break;
            }
            else if(i>10000){
                cout<<-1<<endl;
                break;
            }
        }

    }
    return 0;
}
