#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
        int b,g,s,h;
        cin>>b;
        int araboy[101];
        for(int i=0;i<n;i++)
            araboy[i]=0;
        for(int i=0;i<b;i++){
            cin>>s;
            araboy[s]=1;
        }
        cin>>g;
        int aragirl[101];
        for(int i=0;i<m;i++)
            aragirl[i]=0;
        for(int i=0;i<g;i++){
            cin>>h;
            araboy[h]=1;
        }
        int flag=0,flag2=0;
        for(int i=0;100*(m+n);i++){
            int r=i%n;
            int y=i%m;
            if(araboy[r]==1||aragirl[y]==1){
                araboy[r]=1;
                aragirl[y]=1;
            }
        }
        for(int j=0;j<n;j++){
                if(araboy[j]==1){
                    flag=3;
                }
                else{
                    flag=1;
                    break;
                }
            }
        if(flag==3){
            for(int k=0;k<m;k++){
                if(aragirl[k]==1){
                    flag=3;
                }
                else{
                    flag=1;
                    break;
                    }
                }
            }
        if(flag==3)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;

}
