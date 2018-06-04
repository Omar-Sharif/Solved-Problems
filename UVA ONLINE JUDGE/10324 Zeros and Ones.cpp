#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cas=1;
    while(cin>>s)
    {
        int n;
        cin>>n;
        cout<<"Case "<<cas<<':'<<endl;
        for(int m=0;m<n;m++)
        {
            int a,b;
            cin>>a>>b;
            char ch;
            ch=s[a];
            int flag=1;
            int c=max(a,b);
            for(int i=min(a,b);i<=c;i++){
                if(ch!=s[i]){
                    flag=0;
                    break;
                }
            }
            if(flag==1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        cas++;
    }
    return 0;
}
