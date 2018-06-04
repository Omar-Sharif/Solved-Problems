#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int r=t*10;
    string s1[r],s;
    for(int l=1;l<=t;l++){
            int j=0,max=0;
        for(int i=0;i<10;i++){
            cin>>s;
            int k;
            cin>>k;
            if(k>=max){
                if(k==max){
                j++;
                s1[j]=s;
                }
                else
                    s1[j]=s;
               max=k;
            }
        }
        cout<<"Case "<<'#'<<l<<':'<<endl;
        for(int q=0;q<=j;q++)
            cout<<s1[q]<<endl;
    }
return 0;
}
