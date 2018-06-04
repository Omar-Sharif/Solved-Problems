#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,q;
    cin>>k;
    for(int u=0;u<k;u++)
    {
        string s,s1;
        cin>>s;
        cin>>q;
        for(int l=0;l<q;l++){
            cin>>s1;
            int x=s1.length();
            int y=s.length();
            int flag=0;
            for(int i=0;i<=y-x;i=i+x){
                    int j=0;
                for(int k=i;k<i+x;k++){
                    if(s[k]==s1[j]){
                        flag=1;
                        j++;
                    }
                    else{
                        flag=0;
                        break;
                    }
                }
                if(flag==1){
                    cout<<'y'<<endl;
                    break;
                }
            }
            if(flag!=1)
                cout<<'n'<<endl;
        }
    }
    return 0;
}
