#include<bits/stdc++.h>
using namespace std;
struct my
{
    string s;
    int l;
};

int main()
{
    string s5,s1,s2,s3,s4;
    my ara[6];
    int i,temp;
    while(cin>>s1>>s2>>s3>>s4)
    {
        i=0;
        ara[i].l=s1.length()-2;ara[i].s=s1[0];i++;
        ara[i].l=s2.length()-2;ara[i].s=s2[0];i++;
        ara[i].l=s3.length()-2;ara[i].s=s3[0];i++;
        ara[i].l=s4.length()-2;ara[i].s=s4[0];i++;
        //sort(ara+1,ara+i);
        for(int k=0;k<4;k++){
            for(int m=k+1;m<4;m++){
                if(ara[k].l>ara[m].l){
                        temp=ara[k].l;
                        ara[k].l=ara[m].l;
                        ara[m].l=temp;
                        s5=ara[k].s;
                        ara[k].s=ara[m].s;
                        ara[m].s=s5;
                }
            }
        }
       // for(int j=0;j<4;j++)
         //   cout<<ara[j].l<<' '<<ara[j].s<<endl;

        if((2*ara[0].l<=ara[1].l)&&(2*ara[2].l>ara[3].l))
            cout<<ara[0].s<<endl;
        else if((2*ara[0].l>ara[1].l)&&(2*ara[2].l<=ara[3].l))
            cout<<ara[3].s<<endl;
        else
            cout<<"C"<<endl;
    }
}
