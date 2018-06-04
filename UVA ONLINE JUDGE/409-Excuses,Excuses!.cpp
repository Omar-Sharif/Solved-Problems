#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,flag=0;
    while(cin>>k>>l)
    {
        if(flag!=0)
            cout<<cout<<endl;
        flag++;
       getchar();
       string s[k+2],s1[l+2],s2[72],s3[l+2];
       int i,j,m,n,a;

       for(i=1;i<=k;i++){
           getline(cin,s[i]);

       }

       for(i=1;i<=l;i++){
            getline(cin,s1[i]);
            s1[i]+=' ';
       }

       for(i=1;i<=l;i++){
            int x=s1[i].length();
            for(j=0;j<x;j++){
                if(s1[i][j]>='A'&&s1[i][j]<='Z')
                    s1[i][j]=s1[i][j]+32;
            }
       }
        int x,count=0,sum;
        for(i=1;i<=l;i++){
            x=s1[i].length();
            m=1;
            sum=0;
            for(j=0;j<x;j++){
                if(s1[i][j]==' ')m++;
                else s2[m]+=s1[i][j];
            }
            for(n=1;n<m;n++){
                for(int o=1;o<=k;o++){
                    if(s2[n]==s[o]){
                        sum++;
                        cout<<s2[n]<<' '<<s[o]<<endl;
                    }
                }
            }
            if(sum>count){
                a=0;
                s3[a]=s1[i];
            }
            else if(sum==count){
                a++;
                s3[a]=s1[i];
            }
        }

    }
}
