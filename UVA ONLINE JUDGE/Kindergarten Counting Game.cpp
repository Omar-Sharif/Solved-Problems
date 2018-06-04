#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int x=s.length();
        int count=0;
        for(int i=0;i<x;i++){
                if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
                    for(int j=i;;j++){
                        if((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z'))
                                continue;
                        else
                        {
                            count++;
                            i=j;
                            break;
                        }
                    }
                }
                }
        cout<<count<<endl;
    }
    return 0;
}
