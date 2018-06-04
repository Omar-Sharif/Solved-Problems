#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cas=0;
    int n,m,x;
    string s;
    cin>>t;
    while(t--){
        while(cin>>n>>m){
            deque<int>dq;
           printf("Case %d:\n",++cas);
            for(int i=1;i<=m;i++){
                cin>>s;
                if(s=="pushLeft"){
                    cin>>x;
                    if(dq.size()<n){
                        dq.push_front(x);
                        printf("Pushed in left: %d\n",x);
                    }
                    else printf("The queue is full\n");
                }
                else if(s=="pushRight"){
                    cin>>x;
                    if(dq.size()<n){
                        dq.push_back(x);
                        printf("Pushed in right: %d\n",x);
                    }
                    else printf("The queue is full\n");
                }
                else if(s=="popLeft"){
                    if(dq.size()==0)printf("The queue is empty\n");
                    else{
                        x=dq.front();
                        dq.pop_front();
                        printf("Popped from left: %d\n",x);
                    }
                }
                else{
                    if(dq.size()==0)printf("The queue is empty\n");
                    else{
                        x=dq.back();
                        dq.pop_back();
                        printf("Popped from right: %d\n",x);
                    }
                }
            }
        }
    }
}
