#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a,b;
        for(int l=1;l<=n;l++){
            cin>>a>>b;
            for(int i=1;i<=b;i++){
                for(int j=1;j<=a;j++){
                        for(int k=1;k<=j;k++)
                            cout<<j;
                        cout<<endl;
                }
                for(int j=a-1;j>=1;j--){
                    for(int k=1;k<=j;k++)
                        cout<<j;
                    cout<<endl;
                }
                if(i!=b)cout<<endl;
            }
            if(l!=n)cout<<endl;
        }
    }
    return 0;
}
