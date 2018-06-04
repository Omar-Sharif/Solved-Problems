#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
         string s[n+1];
         string s2[17];

         s2[1]="Happy";
         s2[2]="birthday";
         s2[3]="to";
         s2[4]="you";
         s2[5]="Happy";
         s2[6]="birthday";
         s2[7]="to";
         s2[8]="you";
         s2[9]="Happy";
         s2[10]="birthday";
         s2[11]="to";
         s2[12]="Rujia";
         s2[13]="Happy";
         s2[14]="birthday";
         s2[15]="to";
         s2[16]="you";

        for(int i=1;i<=n;i++){
            cin>>s[i];
        }
        int j=1,k=1;
        int m=((n/16)+1)*16;
       for(int i=1;i<=m;i++){
        cout<<s[k]<<": "<<s2[j]<<endl;
        j++;k++;
        if(j>16)
            j=1;
        if(k>n)
            k=1;
       }
    }
    return 0;
}
