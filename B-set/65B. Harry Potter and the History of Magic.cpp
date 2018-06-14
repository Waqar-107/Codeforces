/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    m=4;
    cin>>n;

    string a[n], s, t;
    for(i=0;i<n;i++)
        cin>>a[i];

    //first handle the a[0] manually
    if(a[0][0]>'1')
        a[0][0]='1';

    else
    {
        for(i=1;i<m;i++)
        {
            if(a[0][i]>'0'){
                a[0][i]='0';
                break;
            }
        }
    }

    for(i=1;i<n;i++)
    {
        t=a[i];
        for(j=0;j<m;j++)
        {
            for(k=0;k<10;k++)
            {
                s=a[i];
                s[j]=k+'0';

                if(s>="1000" && s<="2011" && s>=a[i-1])
                {
                    if(t<a[i-1])
                        t=s;
                    else
                        t=min(s,t);
                }
                //cout<<t<<" "<<s<<" "<<i;nl
            }
        }

        a[i]=t;
        if(a[i]<"1000" || a[i]>"2011"){
            cout<<"No solution\n";
            return 0;
        }
    }

    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1]){
            cout<<"No solution\n";
            return 0;
        }
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<endl;

    return 0;
}
