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

void F(string s)
{
    string row,cc,column;
    ll i,j,k;
    ll idx,num,r;

    //row
    for(i=1;;i++)
    {
        if(s[i]=='C')
        {
            idx=i+1;
            break;
        }

        else
            row.push_back(s[i]);
    }

    //column
    j=0;
    for(i=idx;i<s.length();i++)
        column.push_back(s[i]);

    num=stoll(column,0,10);
    while(true)
    {
        r=num%26;
        num--;
        num=num/26;


        if(r>0)
        {
            cc.push_back((r+64));
        }

        else
        {
            cc.push_back('Z');
        }

        if(num<=0)
        {
            break;
        }
    }

    reverse(cc.begin(),cc.end());

    cout<<cc<<row<<endl;
}

void S(string ss)
{
    ll i,j,k;
    ll idx,n,x=26,s=0;
    string p1,row="R";

    //column
    for(i=0;;i++)
    {
       if(isdigit(ss[i])==1)
       {
           idx=i;break;
       }

       else
            p1.push_back(ss[i]);
    }

    //row
    for(i=idx;i<ss.length();i++)
        row.push_back(ss[i]);

    //column
    n=p1.length()-1;
    s=(int)ss[n] -64;
    for(i=n-1;i>=0;i--)
    {
        s+=(x*(ss[i]-64));
        x=x*26;
    }

    cout<<row<<"C"<<s<<endl;
}


int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n;
    string s;

    bool f;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        f=false;
        if(s[0]=='R' && isdigit(s[1]))
        {
            for(j=2;j<s.length();j++)
            {
                if(s[j]=='C')
                {
                    f=true;break;
                }
            }

            if(f)
                F(s);
            else
                S(s);
        }

        else
            S(s);

    }

    return 0;
}
