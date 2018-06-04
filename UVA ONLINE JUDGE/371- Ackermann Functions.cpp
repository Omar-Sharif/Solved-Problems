#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,h,m,count,temp,i,max,value,j;

    while(cin>>l>>h){
            max=0;
    value=0;
        if(l==0&&h==0)
            break;
        if(h<l){
            temp=h;
            h=l;
            l=temp;
        }
        for(i=l;i<=h;i++){
                count=0;
                j=i;
            while(true){
                if((j%2)==0&&j!=0)
                    j=j/2;
                else
                    j=3*j+1;
                count++;
                if(j==1)
                    break;
            }
            if(count>max){
                value=i;
                max=count;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,value,max);
    }
    return 0;
}
