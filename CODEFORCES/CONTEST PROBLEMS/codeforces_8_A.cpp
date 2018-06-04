#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,s3;
int flag,flag1,flag2,flag3;

int check()
{
    int l1=s.length();
    int l2=s1.length();
    int j=0,i,k=0;
    flag=1;

    for(i=0;i<l1;i++){
        if(s[i]==s1[j]){
            for(k=i;k<l1 and j<l2;k++){
                if(s[k]!=s1[j]){
                    j=0;
                    flag=0;
                    break;
                }
                j++;
            }
            if(j!=l2){
                flag=1;
                j=0;
            }
            else{
                break;
            }
        }
    }
   // cout<<j<<' '<<l2<<' '<<flag<<endl;
    if(j!=l2)flag=0;
    //cout<<k<<' '<<flag<<endl;
    return k;
}

int check2(int l)
{
    int l1=s.length();
    int l2=s2.length();
    flag1=1;
    int i,j=0,k=0;

    for(i=l;i<l1;i++){
        if(s[i]==s2[j]){
            for(k=i;k<l1 and j<l2;k++){
                if(s[k]!=s2[j]){
                    j=0;
                    flag1=0;
                    break;
                }
                j++;
            }
            if(j!=l2){
                flag1=1;
                j=0;
            }
            else{
              break;
            }
        }
    }
    if(j!=l2)flag1=0;
    //cout<<flag1<<endl;
}
int main()
{
    while(cin>>s>>s1>>s2)
    {
        int m1=check();
       // cout<<m1<<endl;
        check2(m1);
       // cout<<flag<<' '<<flag1<<endl;
        if(flag==1 and flag1==1)flag2=1;
        else flag2=0;
        //cout<<flag2<<endl;
        reverse(s.begin(),s.end());
        m1=check();
       // cout<<m1<<endl;
        check2(m1);
        //cout<<flag<<' '<<flag1<<endl;
        if(flag==1 and flag1==1)flag3=1;
        else flag3=0;
        //cout<<"flag "<<flag2<<' '<<flag3<<endl;
        if(flag2==1 and flag3==1)cout<<"both"<<endl;
        else if(flag2==1 and flag3==0)cout<<"forward"<<endl;
        else if(flag2==0 and flag3==1)cout<<"backward"<<endl;
        else if(flag2==0 and flag3==0)cout<<"fantasy"<<endl;
    }
}
