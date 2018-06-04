#include<bits/stdc++.h>
using namespace std;

#define mx 1000010
string str[mx];
int k;

int check(int mid,int v,int count)
{
    int f=0,c=0,value=1,ff=1;
    for(int i=1;i<=count;i++){
        c+=str[i].length();
        if(c>mid and f==0){
            ff=0;
            break;
        }
        else if(c>mid and f==1){
            c=0;
            i--;
            value++;
            f=0;
            continue;
        }
        if(c<=mid){
            f=1;
        }
    }
    if(value>v)ff=0;
    return ff;
}
int main()
{
    cin>>k;
    string s,s1;
    getchar();
    getline(cin,s);

    int count=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            s1+='.';
            str[count++]=s1;
            s1.clear();
        }
        else if(s[i]=='-'){
            s1+='-';
            str[count++]=s1;
            s1.clear();
        }
        else s1+=s[i];
    }
    str[count]=s1;

    int low=1,high=10000000,mid,ans;
    while(low<=high){
        mid=(low+high)/2;
        int c=check(mid,k,count);
        if(c==1){
            high=mid-1;
            ans=mid;
        }
        else low=mid+1;
    }
    cout<<ans<<endl;
}
