#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s,s1;
    while(getline(cin,s)){
        if(s=="DONE")
            break;
        else{
                int j=0,flag=1;
            for(int i=0;s[i]!='\0';i++){
                if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
                    s1[j]=s[i];
                    j++;
                }

            }
            int m=0;
            for(int i=0;i<j;i++){
                if(s1[i]>='A'&&s1[i]<='Z')
                    s1[m]=s1[i]+32;
                else
                    s1[m]=s1[i];
                m++;
            }
            int l;
            for(int k=0,l=j-1;k<m;k++,l--){
                if(s1[k]==s1[l]){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }

        if(flag==1)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
        }
    }
    return 0;
}
