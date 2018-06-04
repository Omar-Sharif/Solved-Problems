#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    double i,j,k,m,n,sum,sum1,hh,mm,ss,hh1,mm1,ss1,p,q,r,t;
    double speed=0,distance=0,sp,d;
    while(getline(cin,s)){
        string s1,s2,s3,s4;
        int l=s.length(),flag=0,flag1=0;
        p=1,q=1,r=1,t=1;
        hh=0,mm=0,ss=0;
        for(i=0;i<l;i++){
            if(s[i]==':'){
                    flag1++;
                for(j=i+1;j<l;j++){
                    if(s[j]==':'){
                            flag1++;
                        for(k=j+1;k<l;k++){
                            if(s[k]==' '){
                                flag1++;
                                flag=1;
                                for(m=k+1;m<l;m++)
                                    s4+=s[m];
                            }
                            else{
                                 s3+=s[k];
                            }
                            if(flag1>2)
                                break;
                        }
                    }
                    else{
                        s2+=s[j];
                    }
                if(flag1>1)
                    break;
                }
            }
            else{
              s1+=s[i];
            }
            if(flag1>0)
                break;
        }
        for(i=s1.length()-1;i>=0;i--){
            hh+=(s1[i]-'0')*p;
            p=p*10;
        }
        for(i=s2.length()-1;i>=0;i--){
            mm+=(s2[i]-'0')*q;
            q=q*10;
        }
        for(i=s3.length()-1;i>=0;i--){
            ss+=(s3[i]-'0')*r;
            r=r*10;
        }

        sum=(hh*3600)+(mm*60)+ss;
        sum1=(hh1*3600)+(mm1*60)+ss1;
        hh1=hh;mm1=mm;ss1=ss;

        if(flag==1){
            sp=speed;
            speed=0;
            d=((sum-sum1)*sp)/3600;
        }
        else{
            d=((sum-sum1)*speed)/3600;
        }
        if(flag==1){
            for(i=s4.length()-1;i>=0;i--){
                speed+=(s4[i]-'0')*t;
                t=t*10;
            }
        }
        distance+=d;
        if(flag==0)
            cout<<s<<' '<<fixed<<setprecision(2)<<distance<<" km"<<endl;
    }
    return 0;
}
