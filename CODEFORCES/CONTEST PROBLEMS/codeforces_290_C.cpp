#include<bits/stdc++.h>
using namespace std;

string s[110],finals;
map<char,int>val;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];

    int count=1;
    for(int k=0;k<100;k++){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int q=0;q<=k;q++){
                    if(s[i][q]>='a' and s[i][q]<='z' and s[j][q]>='a' and s[j][q]<='z'){
                        char c1=s[i][q];
                        char c2=s[j][q];
                        int x=val[c1];
                        if(x==0){
                            finals+=c1;
                            val[c1]=count++;
                            x=val[c1];
                        }
                        int y=val[c2];
                        if(y==0){
                            finals+=c2;
                            val[c2]=count++;
                            y=val[c2];
                        }
                       // cout<<i<<' '<<j<<' '<<q<<' '<<c1<<' '<<x<<' '<<c2<<' '<<y<<endl;
                        if(y<x){
                            cout<<"Impossible"<<endl;
                            return 0;
                        }
                        if(y>x){
                            break;
                        }

                    }
                    else{
                        if(s[i].size()>s[j].size()){
                            cout<<"Impossible"<<endl;
                            return 0;
                        }
                        else break;
                    }
                }
            }
        }
    }
    //cout<<finals<<endl;
    for(char i='a'; i<='z';i++){
        if(val[i]==0)finals+=i;
    }
    cout<<finals<<endl;
}
