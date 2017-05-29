#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,k;
        int l,d,count=0;
        char s[120];

        cin>>s;
        l=strlen(s);

        d=abs(s[0]-'a');
        if(d<=13)
            count+=d;
        else
        {
            count+=(26-d);
        }


        for(i=0;i<l-1;i++)
        {
            d=abs(s[i]-s[i+1]);

            if(d<=13)
                count+=d;
            else
            {
                count+=(26-d);
            }
        }

        cout<<count;

        return 0;

}
