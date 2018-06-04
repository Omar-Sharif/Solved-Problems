#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    while(cin>>n){
        vector<int>v,v1;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
            v1.push_back(x);
        }
        sort(v1.begin(),v1.end());
        int count=0;
        while(1){
            if(v1==v)
                break;
            for(int i=0;i<v.size()-1;i++){
                if(v[i]>v[i+1]){
                    swap(v[i],v[i+1]);
                    count++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<count<<endl;
    }
}
