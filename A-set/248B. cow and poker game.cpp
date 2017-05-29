#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,k,count;
        int n,a=0,f=0,in=0;

        cin>>n;
        char s[n+2];
        cin>>s;

        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='F')
                f++;
            else
                in++;
        }

        if(in==0)
        {
            cout<<a<<endl;
        }

        else if(in==1)
            cout<<"1"<<endl;

        else
            cout<<"0"<<endl;

        return 0;
}
