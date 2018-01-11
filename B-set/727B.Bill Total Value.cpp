/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200
#define inf 10000000000
#define pp pair<char,int>

using namespace std;

int cent,dollar;

void toPrice(string s)
{
    //float
    if(s.length()>=3 && s[s.length()-3]=='.')
    {
        int l=s.length()-1;
        cent+=(s[l]-48)+(s[l-1]-48)*10;

        int k=1;
        for(int i=l-3;i>=0;i--)
        {
            if(isdigit(s[i]))
            {
                dollar+=(s[i]-48)*k;k*=10;
            }
        }
    }

    else
    {
        int l=s.length()-1;
        int k=1;

        for(int i=l;i>=0;i--)
        {
            if(isdigit(s[i]))
            {
                dollar+=(s[i]-48)*k;k*=10;
            }
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,x;
    string s,t;
    dollar=0,cent=0;

    cin>>s;

    n=s.length();
    i=0;t="";

    while(i<n)
    {
        if(isdigit(s[i]) || s[i]=='.')
            t+=s[i];

        else
        {
            toPrice(t);
            t="";
        }

        i++;

        if(i==n)
            toPrice(t);
    }

    dollar+=(cent/100);
    cent=cent%100;

    t="";k=0;
    while(dollar)
    {
        t+=(dollar%10)+48;
        dollar/=10;

        k++;
        if(k%3==0 && dollar)
            t+='.';
    }

    if(t.length()==0)
        t+='0';

    reverse(t.begin(),t.end());

    cout<<t;
    if(cent)
    {
        cout<<'.';
        if(cent<10)
            cout<<'0'<<cent;
        else
            cout<<cent;
    }

    return 0;
}
