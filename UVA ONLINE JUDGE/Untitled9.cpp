#include<bits/stdc++.h>
int main()
{
    int Case1,Case2;

    scanf("%d",&Case1);
    char ch;
    scanf("%c",&ch);
for(Case2=1;Case2<=Case1;Case2++)
    {
        char s[10010];
        gets(s);
        int n,i,j,p,l;
        double k;
        n=strlen(s);
        k=sqrt(n);
        l=(int) k;
        char c[l][l];
    if(l!=k)
    {
    printf("INVALID\n");
    }
else
{
p=0;
for(i=0;i<l;i++)
{
    for(j=0;j<l;j++)
    {
    c[i][j]=s[p];
    p++;
    }
}
for(i=0;i<l;i++)
{
    for(j=0;j<l;j++)
    {
    printf("%c",c[j][i]);
    }
}
printf("\n");

}
}
return 0;
}
