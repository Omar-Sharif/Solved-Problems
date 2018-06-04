#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
            for(int o=1;o<=n;o++){
            if(o%2!=0){
                for(int k=1;k<=m;k++)
                    cout<<'#';
                    cout<<endl;
            }
            else{
                int l=o/2;
            if(l%2!=0){
                for(int k=1;k<m;k++)
                    cout<<'.';
                cout<<'#'<<endl;
            }
            else{
                 cout<<'#';
                 for(int k=1;k<m;k++)
                    cout<<'.';
                    cout<<endl;
            }
        }

       }
}
return 0;
}
