/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define inf 1000000000000

#define mm 1000000007

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,p,q;

    cin>>n;

   while(1)
   {
       p=n;
       for(i=2;i<=p;i++)
       {
           if(p%i==0)
           {
               cout<<p<<" ";
               p=p/i;
               break;
           }
       }

       if(p==n)
        break;

        n=p;
   }

   cout<<"1";

    return 0;
}
