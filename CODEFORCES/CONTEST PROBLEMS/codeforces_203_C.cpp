#include<bits/stdc++.h>
using namespace std;

struct st
{
    int x,y,sum;
}ara[100010];

bool cmp(st a, st b)
{
    return a.sum<b.sum;
}
void c1(int a)
{
     if(a>0){
        printf("1 %d U\n",abs(a));
        printf("2\n");
        printf("1 %d D\n",abs(a));
        printf("3\n");

    }
    else{
        printf("1 %d D\n",abs(a));
        printf("2\n");
        printf("1 %d U\n",abs(a));
        printf("3\n");
    }
}
void c2(int a)
{
    if(a>0){
        printf("1 %d R\n",abs(a));
        printf("2\n");
        printf("1 %d L\n",abs(a));
        printf("3\n");

    }
    else{
        printf("1 %d L\n",abs(a));
        printf("2\n");
        printf("1 %d R\n",abs(a));
        printf("3\n");

    }
}
void c3(int a,int b)
{
    if(a>0){
        printf("1 %d R\n",abs(a));
        if(b>0){
            printf("1 %d U\n",abs(b));
            printf("2\n");
            printf("1 %d D\n",abs(b));
        }
        else{
            printf("1 %d D\n",abs(b));
            printf("2\n");
            printf("1 %d U\n",abs(b));
        }
        printf("1 %d L\n",abs(a));
        printf("3\n");
    }
    else{
        printf("1 %d L\n",abs(a));
        if(b>0){
            printf("1 %d U\n",abs(b));
            printf("2\n");
            printf("1 %d D\n",abs(b));
        }
        else{
            printf("1 %d D\n",abs(b));
            printf("2\n");
            printf("1 %d U\n",abs(b));
        }
        printf("1 %d R\n",abs(a));
        printf("3\n");
    }
}

int main()
{
    int n,a,b,c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        ara[i].x=a;ara[i].y=b;
        ara[i].sum=abs(a)+abs(b);
        if(a==0 or b==0)c+=4;
        else c+=6;
    }
    cout<<c<<endl;
    sort(ara+1,ara+n+1,cmp);

    for(int i=1;i<=n;i++){
        if(ara[i].x==0)c1(ara[i].y);
        else if(ara[i].y==0)c2(ara[i].x);
        else c3(ara[i].x,ara[i].y);
    }
}
