#include <stdio.h>
#include <string.h>
int main()
{
    char str[150];
    int i,j,k=1,l,n,count,ln;

    while(scanf("%d",&n)==1){

    while(k<=n){
        gets(str);
        ln=strlen(str);
        if(ln==0)
            continue;
        count=0;
        for(i=0;i<ln;i++){
            if(str[i]==' ')
                count=count+1;
            if(str[i]=='a')
                count=count+1;
            if(str[i]=='b')
                count=count+2;
            if(str[i]=='c')
                count=count+3;
            if(str[i]=='d')
                count=count+1;
            if(str[i]=='e')
                count=count+2;
            if(str[i]=='f')
                count=count+3;
            if(str[i]=='g')
                count=count+1;
            if(str[i]=='h')
                count=count+2;
            if(str[i]=='i')
                count=count+3;
            if(str[i]=='j')
                count=count+1;
            if(str[i]=='k')
                count=count+2;
            if(str[i]=='l')
                count=count+3;
            if(str[i]=='m')
                count=count+1;
            if(str[i]=='n')
                count=count+2;
            if(str[i]=='o')
                count=count+3;
            if(str[i]=='p')
                count=count+1;
            if(str[i]=='q')
                count=count+2;
            if(str[i]=='r')
                count=count+3;
            if(str[i]=='s')
                count=count+4;
            if(str[i]=='t')
                count=count+1;
            if(str[i]=='u')
                count=count+2;
            if(str[i]=='v')
                count=count+3;
            if(str[i]=='w')
                count=count+1;
            if(str[i]=='x')
                count=count+2;
                if(str[i]=='y')
                count=count+3;
            if(str[i]=='z')
                count=count+4;
        }
        printf("Case #%d: %d\n",k,count);
        k++;

    }
    }

    return 0;
}
