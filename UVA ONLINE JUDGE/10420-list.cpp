#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    string ara[2010];
    string ara1[2010];
    string ara2[2010];
    int num [2010],tenp;
    string temp;
    int test,i,j,k,m,n,q,count,flag;

    cin >> test;
    for(i=0,q=0;i<test;i++) {
        cin >>ara[i];
        getline(cin,ara1[i]);
    }

    for(i=0;i<test;i++){
        flag=1;
        count=1;
        for(k=0;k<i;k++){
            if(ara[i]==ara[k]){
             flag=0;
            }
        }
    if(flag!=0){
       for(j=i+1;j<test;j++){
        if(ara[i]==ara[j])
        count++;
       }
       ara2[q]=ara[i];
       num[q]=count;
       q++;
    }
    }
    for(i=0;i<q;i++){
        for(j=i+1;j<q;j++){
            if(ara2[i][0]>ara2[j][0]){
                temp=ara2[i];
                tenp=num[i];
                ara2[i]=ara2[j];
                num[i]=num[j];
                ara2[j]=temp;
                num[j]=tenp;
            }
        }
        cout<<ara2[i]<<" "<<num[i]<<endl;
    }
    return 0;
}
