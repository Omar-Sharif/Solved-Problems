#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    while(cin>>n>>c){
        int flag1=0;
    int ara[1000];
    int j=1,flag;
    for(int i=1;i<=n;i++){
            if(i==1){
                ara[j]=i;
                j++;
            }
             else if(i==2){
                ara[j]=i;
                j++;
            }
             else if(i==3){
                ara[j]=i;
                j++;
            }
        else if(i%2!=0){
            for(int m=2;m<=sqrt(i);m++){
                flag=1;
                if(i%m==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                ara[j]=i;
                j++;
            }
        }
    }
    int mid=0,y=j-1;
    if(y%2==0){
        mid=y/2+1;
        flag1=1;
    }
    else
        mid=y/2+1;
    if(c*2>=y&&c*2-1>=y){
        cout<<n<<' '<<c<<": ";
        for(int k=1;k<j;k++){
            cout<<ara[k];
        if(k!=j-1)
            cout<<' ';
        }
    }
    else if(flag1==1){
        cout<<n<<' '<<c<<": ";
        for(int k=mid-c;k<mid+c;k++){
                cout<<ara[k];
        if(k!=mid+c-1)
            cout<<' ';
        }
    }
    else{
       cout<<n<<' '<<c<<": ";
        for(int k=mid-c+1;k<mid+c;k++){
                cout<<ara[k];
        if(k!=mid+c-1)
            cout<<' ';
        }
    }
        cout<<endl;
        cout<<endl;
    }
    return 0;
}
