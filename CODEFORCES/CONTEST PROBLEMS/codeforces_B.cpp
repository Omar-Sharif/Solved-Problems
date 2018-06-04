#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int ara[n+1];
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<n;i++){
            cin>>ara[i];
            v.push_back(i);
        }
        int i=1;
        while(1){
            for(int i=0;i<n;i++){
                if(i%2==0){
                    if(ara[i]==n-1){
                        ara[i]=0;
                        v1.push_back(ara[i]);
                    }
                    else{
                        ara[i]=ara[i]+1;
                        v1.push_back(ara[i]);
                    }
                }
                else{
                    if(ara[i]==0){
                        ara[i]=n-1;
                        v1.push_back(ara[i]);
                    }
                    else{
                        ara[i]=ara[i]-1;
                        v1.push_back(ara[i]);
                    }
                }
            }
            if(v1==v){
              cout<<"Yes"<<endl;
              break;
            }
            v1.clear();
            if(i>100000){
                cout<<"No"<<endl;
                break;
            }
            i++;
        }
    }

}

