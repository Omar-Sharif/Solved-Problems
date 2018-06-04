#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        double ara[n],m,k,l,temp;
        string s[n],g,o;
        for(int i=0;i<n;i++){
            cin>>g;
            ara[i]=atof(g.c_str());
            s[i]=g;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(ara[i]<ara[j]){
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                    o=s[i];
                    s[i]=s[j];
                    s[j]=o;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
                cout<<s[i]<<endl;
            else
                cout<<s[i]<<',';
        }
    }
}
