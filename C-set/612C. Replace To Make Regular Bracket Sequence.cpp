/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("xxxx");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,count=0;
    string s;char x,y;
    deque<char> ch;


    map<char,char> clo;

    clo['}']='{';
    clo['>']='<';
    clo[']']='[';
    clo[')']='(';


    cin>>s;
    n=s.length();

    for(i=0;i<n;i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[' || s[i]=='<')
            ch.push_back(s[i]);

        else
        {
            if(ch.size()==0)
            {
                cout<<"Impossible";return 0;
            }

            if(clo[s[i]]==ch.back())
                ch.pop_back();
            else
            {
                ch.pop_back();
                count++;
            }

        }
    }

    if(ch.size()==0)
        cout<<count;
    else
        cout<<"Impossible";

    return 0;
}
