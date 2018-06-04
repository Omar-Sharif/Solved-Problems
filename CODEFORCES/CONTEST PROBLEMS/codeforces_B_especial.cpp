#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1,s2,s3;
    int f1;

    while(getline(cin,s))
    {
        int l=s.length();

        for(int i=0;i<l;i++){
            if(s[i]==' ')continue;
            if(s[i]==',' or s[i]=='.')s1+=s[i];
            if(s[i]>='0' and s[i]<='9')
            {
                f1=0;int j;
                for(j=i;j<l;j++){
                    if(s[j]=='.' or s[j]==',')break;
                    else if(s[j]==' '){
                        s1+=s[j];
                        break;
                    }
                    else s1+=s[j];
                }
                i=j-1;
            }
        }

      // cout<<s1<<endl;

        for(int i=0;i<s1.length();i++){
            if(s1[i]==','){
                s2+=',';
                s2+=' ';
            }
            else if(s1[i]=='.'){
                s2+=' ';
                s2+='.';s2+='.';s2+='.';
                i+=2;
            }
            else s2+=s1[i];
        }

       //cout<<s2<<endl;
        l=s2.length();

        for(int i=0;i<l;i++){
            if((s2[i]==' ' and i==0)or (s2[i]==' 'and i==l-1))continue;
            else if(s2[i]==' '){
                //cout<<i<<' '<<s2[i-1]<<' '<<s2[i+1]<<endl;
                if(s2[i-1]==' ')continue;
                else if(s2[i-1]==',' and s2[i+1]==',')s3+=s2[i];
                else if(s2[i-1]==',' and s2[i+1]=='.')s3+=s2[i];
                else if(s2[i-1]=='.' and s2[i+1]=='.')s3+=s2[i];
                else if(s2[i-1]==',' and (s2[i+1]>='0' and s2[i+1]<='9'))s3+=s2[i];
                else if((s2[i-1]>='0' and s2[i-1]<='9') and (s2[i+1]>='0' and s2[i+1]<='9'))s3+=s2[i];
                else if((s2[i-1]>='0' and s2[i-1]<='9') and s2[i+1]=='.')s3+=s2[i];
                else if(s2[i-1]==',')s3+=s2[i];
                else if(s2[i+1]=='.')s3+=s2[i];
            }
            else s3+=s2[i];
        }
        //cout<<s3<<endl;
        s.clear();
        string my;
        l=s3.length();
        for(int i=0;i<l;i++){
            if(s3[i]==',' and i!=l-1){
                my+=',';
                if(s3[i+1]!=' ')my+=' ';
            }
            else if(s3[i]=='.' and i!=0){
                if(s3[i-1]!=' ')my+=' ';
                my+='.';my+='.';my+='.';
                i+=2;
            }
            else if(s3[i]=='.'){
                 my+='.';my+='.';my+='.';
                i+=2;
            }
            else my+=s3[i];

        }
        cout<<my<<endl;
        //cout<<s.length()<<endl;
        s.clear();s2.clear();s3.clear();s1.clear();
    }
}

