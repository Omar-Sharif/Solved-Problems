#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define mx 100010
#define lli long long
string s,s1;
char F[4][20];
map<char,int>my;

int main()
{
    int a,b,c,d,pos1,pos2;
    while(cin>>s){
        int l=s.length();

        for(int i=0;i<l;i++){
            if(my[s[i]]==0)my[s[i]]=1;
            else{
                pos2=i;
                for(int j=pos2-1;j>=0;j--){
                    if(s[j]==s[i]){
                        pos1=j;
                        break;
                    }
                }
            }
        }
        if(pos2-pos1<=1)cout<<"Impossible"<<endl;
        else{
            d=pos2-pos1-1; c=d/2;
            a=d-c;
            int k=1;
            for(int i=12,j=pos1+c;;){
                F[k][i]=s[j];
                j--;i--;
                if(j<0)break;
                if(i<0){
                    k++;
                    if(j>=0){
                        for(int m=0;j>=0;j--,m++)
                            F[k][m]=s[j];
                    }
                    break;
                }
            }
            k=2;
            for(int i=12,j=pos1+c+1;;){
                if(j==pos2)j++;
                if(j>=l)break;
               F[k][i]=s[j];
               j++;i--;
               if(i<0){
                    k--;
                    if(j<l){
                        for(int m=0;j<l;j++,m++)
                            F[k][m]=s[j];
                    }
                    break;
               }
            }

            for(int i=1;i<3;i++){
                for(int j=0;j<13;j++)
                    cout<<F[i][j];;
                cout<<endl;
            }

        }

    }
}

