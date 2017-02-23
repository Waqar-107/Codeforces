#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<char,int>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,s,bs;

        cin>>n>>s;
        bs=s;
        char max[n+1],min[n+1];

        // 1 0 special case
        if(n==1 && s==0)
        {
            cout<<"0 0"<<endl;
            return 0;
        }

        //maximum
        for(i=0;i<n;i++)
        {
            if(s>=9)
            {
                max[i]='9';
                s-=9;
            }

            else
            {
                if(s>=0)
                {
                    max[i]=(s+48);
                    s=0;
                }

                else
                {
                    max[i]='0';
                }
            }
        }
        max[n]='\0';


        min[0]='1';
        bs--;
        for(i=n-1;i>0;i--)
        {
            if(bs>9)
            {
                min[i]='9';bs-=9;
            }

            else
            {
                if(bs>0)
                {
                    min[i]=(bs+48);bs=0;
                }

                else
                    min[i]='0';
            }
        }
        min[n]='\0';

        if(bs>0 && bs<=8)
        {
            min[0]=(bs+48+1);
            bs=0;
        }

        if(s!=0 || bs!=0)
        {
            cout<<"-1 -1"<<endl;
            return 0;
        }

        i=0;
        while(i<strlen(min))
        {
            if(isdigit(min[i]))
                cout<<min[i];

            i++;
        }

        cout<<" ";


        i=0;
        while(i<strlen(max))
        {
            if(isdigit(max[i]))
                cout<<max[i];

            i++;
        }

        return 0;
}
