/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    ll i,j,k;
    ll n,p,t;
    char tm,cr;
    string hm,aw;
    map<ll,char> home;
    map<ll,char> away;

    cin>>hm>>aw;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>t>>tm>>p>>cr;

        //----------------------------------------
        if(tm=='h')
        {
            if(home[p]!='r')
            {
                if(cr=='r')
                {
                    home[p]='r';
                    cout<<hm<<" "<<p<<" "<<t<<endl;
                }

                else
                {
                    if(home[p]=='y')
                    {
                        home[p]='r';
                        cout<<hm<<" "<<p<<" "<<t<<endl;
                    }

                    else
                        home[p]='y';
                }
            }

        }
        //----------------------------------------



        //----------------------------------------
        else
        {
            if(away[p]!='r')
            {
                if(cr=='r')
                {
                    away[p]='r';
                    cout<<aw<<" "<<p<<" "<<t<<endl;
                }

                else
                {
                    if(away[p]=='y')
                    {
                        away[p]='r';
                        cout<<aw<<" "<<p<<" "<<t<<endl;
                    }

                    else
                        away[p]='y';
                }
            }
        }
        //----------------------------------------
    }


    return 0;
}

