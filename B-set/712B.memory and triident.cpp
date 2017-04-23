#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
        long long int i,j,k;
        long long int n,d=0,u=0,l=0,r=0;
        char s[1000000];

        cin>>s;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='R')
                r++;
            else if(s[i]=='L')
                l++;
            else if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
        }

        if((l+r+u+d)%2==0)
        {
            if(u==d && l==r)
            {
                cout<<"0"<<endl;
            }
            else
                cout<<(abs(u-d)+abs(l-r))/2<<endl;
        }

        else
            cout<<"-1"<<endl;

        return 0;

}
