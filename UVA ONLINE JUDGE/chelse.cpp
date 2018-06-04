#include<iostream>
using namespace std;
int main()
{
    int T,i,N,cas=1,j;
    cin>>T;

    while(T--){
        cin>>N;

        char ch[N];
         for(i=0;i<N;i++)
            cin>>ch[i];
         int c=3;
         for(i=0,j=0;i<N-2;i++,j++){
            if(ch[i]=='W' || ch[i+1]=='W' || ch[i+2]=='W'){
                c++;
                continue;
            }
            break;
         }
         cout<<"Case "<<cas++<<": ";
         if(j!=(N-2))
            cout<<c<<"\n";
        else
            cout<<"Yay! Mighty Rafa persists!\n";
    }
}
