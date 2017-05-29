#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,i,count=0;
        int a[]={4,7,47,74,444,447,474,744,747,777,477};
        char s[10];

        cin>>n;

        for(i=0;i<11;i++)
        {
            if(n%a[i]==0)
                count++;
        }

        if(count>=1)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
}
