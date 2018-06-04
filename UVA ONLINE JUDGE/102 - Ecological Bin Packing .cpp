#include<bits/stdc++.h>
using namespace std;

int main()
{
    long brown[3],green[3],clear[3];

    while(cin>>brown[0]>>green[0]>>clear[0]>>brown[1]>>green[1]>>clear[1]>>brown[2]>>green[2]>>clear[2])
    {
        long summation[7];
        string s[7],s1;
        summation[1]=green[0]+clear[0]+brown[1]+clear[1]+brown[2]+green[2];
        s[1]="BGC";
        summation[2]=green[0]+clear[0]+brown[1]+green[1]+brown[2]+clear[2];
        s[2]="BCG";
        summation[3]=green[0]+brown[0]+green[1]+clear[1]+brown[2]+clear[2];
        s[3]="CBG";
        summation[4]=green[0]+brown[0]+brown[1]+clear[1]+green[2]+clear[2];
        s[4]="CGB";
        summation[5]=clear[0]+brown[0]+green[1]+clear[1]+green[2]+brown[2];
        s[5]="GBC";
        summation[6]=clear[0]+brown[0]+green[1]+brown[1]+green[2]+clear[2];
        s[6]="GCB";
        long min,i,j,k;
        min=summation[1];
        s1=s[1];

        for(i=2;i<7;i++){
            if(summation[i]<=min){
                if(summation[i]==min){
                    if(s[i]<s1)
                        s1=s[i];
                }
                else{
                   min=summation[i];
                    s1=s[i];
                }
            }
        }
       cout<<s1<<' '<<min<<endl;
    }
    return 0;
}
