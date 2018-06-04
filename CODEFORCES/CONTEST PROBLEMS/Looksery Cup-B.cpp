#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        char ara[n+1][m+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ara[i][j];
            }
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                    string s;
                if(ara[i][j]=='f'||ara[i][j]=='a'||ara[i][j]=='c'||ara[i][j]=='e'){
                    s+=ara[i][j];
                    s+=ara[i][j+1];
                    s+=ara[i+1][j];
                    s+=ara[i+1][j+1];
                    int flag1=0,flag2=0,flag3=0,flag4=0;
                    for(int k=0;k<s.length();k++){
                        if(s[k]=='f'){
                            flag1=1;
                        }
                        if(s[k]=='a'){
                            flag2=1;
                        }
                        if(s[k]=='c'){
                            flag3=1;
                        }
                        if(s[k]=='e'){
                            flag4=1;
                        }
                    }
                    if(flag1==1&&flag2==1&&flag3==1&&flag4==1)
                        count++;
                }
            }
        }
        cout<<count<<endl;
    }
}
