#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3,s4,n,n1;
    int m,m1,k=0,l=0;
    cin>>s1>>s2>>s3>>s4;
    int x1=s1.length()-2;
    int x2=s2.length()-2;
    int x3=s3.length()-2;
    int x4=s4.length()-2;
    int minimum=min(x4,min(x3,min(x1,x2)));
    int flag=0,flag1=0;
    if(minimum==x1){
        m=x1;
        n="A";
        int mi=min(x4,min(x3,x2));
        if(m*2<=mi){
            flag=1;
            k++;
        }
    }
    if(minimum==x2){
         m=x2;
         n="B";
        int mi=min(x4,min(x3,x1));
        if(m*2<=mi){
            flag=1;
            k++;
        }
    }
    if(minimum==x3){
         m=x3;
         n="C";
        int mi=min(x4,min(x1,x2));
        if(m*2<=mi){
            flag=1;
            k++;
        }
    }
    if(minimum==x4) {
         m=x4;
         n="D";
        int mi=min(x1,min(x3,x2));
        if(m*2<=mi){
            flag=1;
            k++;
        }
    }
    int maximum=max(x4,max(x3,max(x1,x2)));
    if(maximum==x1){
        m1=x1;
        n1="A";
        int mi=max(x4,max(x3,x2));
        if(mi*2<=m1){
            flag1=1;
            l++;
        }
    }
     if(maximum==x2){
        m1=x2;
        n1="B";
        int mi=max(x4,max(x3,x1));
        if(mi*2<=m1){
            flag1=1;
            l++;
        }
    }
    if(maximum==x3){
        m1=x3;
        n1="C";
        int mi=max(x4,max(x2,x1));
        if(mi*2<=m1){
            flag1=1;
            l++;
        }
    }
    if(maximum==x4){
        m1=x4;
        n1="D";
        int mi=max(x2,max(x3,x1));
        if(mi*2<=m1){
            flag1=1;
            l++;
        }
    }
    if((flag==1&&k>1)||(flag1==1&&l>1)||(flag==0&&flag1==0)||(flag==1&&flag1==1))
        cout<<"C"<<endl;
    else if(flag==1)
        cout<<n<<endl;
    else if(flag1==1)
        cout<<n1<<endl;
    return 0;
}

