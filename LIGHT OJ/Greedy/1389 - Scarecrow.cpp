#include<bits/stdc++.h>
using namespace std;

string s;
int main()
{
    int t,cas=0,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int count=0,c=0,flag=0;

        for(int i=0;i<n;i++){
            if(s[i]=='#' and flag==0)continue;
            c++;
            flag=1;
            if(c==3){
                count++;
                c=0;
                flag=0;
            }
        }
        if(c>0 and flag!=0)count++;

        printf("Case %d: %d\n",++cas,count);

    }
}
