#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
        int i,j,k;
        int n,a,h,m,ha,hm;
        char s[6],t[3];

        cin>>s>>a;

        t[0]=s[0];
        t[1]=s[1];
        t[2]='\0';
        h=atoi(t);

        t[0]=s[3];
        t[1]=s[4];
        t[2]='\0';
        m=atoi(t);

        //cout<<h<<" "<<m;

        ha=a/60;
        hm=a%60;

        if(m+hm>=60)
        {
            m=(m+hm)-60;
            h=(h+ha+1)%24;
        }
        else
        {
            m=m+hm;
            h=(h+ha)%24;
        }

        if(h<10)
            cout<<"0"<<h;
        else
            cout<<h;

        cout<<":";

        if(m<10)
            cout<<"0"<<m;
        else
            cout<<m;

        return 0;
}
