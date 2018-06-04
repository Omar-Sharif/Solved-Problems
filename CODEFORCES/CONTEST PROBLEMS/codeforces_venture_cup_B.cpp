#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
            string s;
            cin>>s;

            int count=0,count1=0,count2=0;

            for(int i=0;i<n;i++){
                if(s[i]=='B')count++;
                else if(s[i]=='G')count1++;
                else count2++;
            }
            //cout<<count<<' '<<count1<<' '<<count2<<endl;
            if(count>=1 and count1>=1 and count2>=1)cout<<"BGR"<<endl;
            else if((count>1 and count1>1) or (count>1 and count2>1) or (count1>1 and count2>1))cout<<"BGR"<<endl;
            else if( count>1 and (count1==1 or count2==1))cout<<"GR"<<endl;
            else if( count1>1 and (count==1 or count2==1))cout<<"BR"<<endl;
            else if( count2>1 and (count==1 or count1==1))cout<<"BG"<<endl;
            else if((count==1 and count1==1) or count2==n)cout<<"R"<<endl;
            else if((count==1 and count2==1)or count1==n)cout<<"G"<<endl;
            else if((count1==1 and count2==1) or count==n)cout<<"B"<<endl;
     }
}

