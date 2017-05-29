#include<bits/stdc++.h>
#define pi acos(-1.0)
const int SIZE = 1e7 + 10;
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        bool f=false;
        char a[SIZE],b[SIZE],temp[SIZE],ch;

        gets(temp);
        k=0;
        for(i=0;i<strlen(temp);i++)
        {
            if(f==false && temp[i]=='0')
                continue;
            else
                f=true;

            a[k]=temp[i];
            k++;
        }

        gets(temp);
        f=false;
        k=0;
        for(i=0;i<strlen(temp);i++)
        {
            if(f==false && temp[i]=='0')
                continue;
            else
                f=true;

            b[k]=temp[i];
            k++;
        }

        if(strlen(a)<strlen(b))
            cout<<"<"<<endl;

        else if(strlen(a)>strlen(b))
            cout<<">"<<endl;

        else
        {
            ll l=strlen(a);
            for(i=0;i<l;i++)
            {
                if(a[i]==b[i])
                    continue;

                else if(a[i]>b[i])
                {
                    cout<<">"<<endl;
                    return 0;
                }

                else if(a[i]<b[i])
                {
                    cout<<"<"<<endl;
                    return 0;
                }
            }

            cout<<"="<<endl;
        }

        return 0;
}
