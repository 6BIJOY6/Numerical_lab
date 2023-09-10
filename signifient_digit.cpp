#include<bits/stdc++.h>
using namespace std;

bool check_integer(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')return 0;
    }
    return 1;
}

int main()
{
    int sum = 0,sum1 = 0;
    int f = 1 , c = 1;
    string s;
    cin>>s;

    if(check_integer(s))
    {
        for(int i=s.size();i>=0;i--)
        {
            if(s[i]>'0') c = 0;
            if(!c)sum++;
        }
        cout<<sum<<endl;
    }

    else{
        for( int i=0;i<s.size();i++)
        {
            if(s[i]=='.')f = 0;
            else if(f && s[i]>'0')sum++;
            else if(f && s[i]=='0'&&sum>0)sum++;
            else if(!f && sum>0)sum++;
            else if(!f && sum==0 && s[i]!='0')sum1++;
            else if(!f && sum==0 && sum1>0)sum1++;
        }
        
        cout<<sum+sum1<<endl;
    }
    return 0;
}