#include<bits/stdc++.h>
using namespace std;
int main()
{
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

        char s[6];
        int n;

        scanf("%s%d",&s,&n);

        if(strcmp(s,"front")==0)
        {
            if(n==1)
                printf("L");
            else
                printf("R");
        }

        else
        {
            if(n==1)
                printf("R");
            else
                printf("L");
        }

        return 0;

}
