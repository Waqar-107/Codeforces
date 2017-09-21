#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 100010

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,u,v;
    string s,t;

    cin>>s;

    k=0;
    for(i=s.length()-1;i>=0;i--)
    {
        if(s[i]!='0')
            break;

        k++;
    }

    for(i=0;i<k;i++)
        s.pop_back();

    j=s.length()-1;
    for(i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[j])
        {
            cout<<"NO";
            return 0;
        }

        j--;
    }

    cout<<"YES";

    return 0;
}
