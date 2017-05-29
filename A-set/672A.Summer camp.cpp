#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
        int i,j,k;
        int n;
        char s[2000],t[5];

        cin>>n;

        j=1;
        for(i=0;i<n;)
        {
                itoa(j,t,10);
                i+=strlen(t);
                strcat(s,t);
                j++;
        }

        printf("%c",s[n-1]);

        return 0;
}
