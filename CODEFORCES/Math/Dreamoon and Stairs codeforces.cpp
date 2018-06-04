#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
        if(n<m||n==0)
            cout<<-1<<endl;
        else{
                int count;
                count=n/2;
            if(n%2==0){
                while(count>0){
                if(count%m==0){
                    cout<<count<<endl;
                    break;
                }
                else
                    count++;
            }
        }
        else{
            count++;
            while(count<=n){
                if(count%m==0){
                    cout<<count<<endl;
                    break;
                }
                else
                    count++;
            }
        }
    }
}
return 0;
}
