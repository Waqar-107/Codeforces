#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
        int i,j,k,t=0;
        int n,d,m,count=0;
        char a[200],s[3];

        gets(a);
        m=strlen(a);

        //week
        if(a[m-1]=='k' && a[m-2]=='e' && a[m-3]=='e' && a[m-4]=='w')
        {
                k=0;
                for(i=0;;i++)
                {
                    if(a[i]>='0'&& a[i]<='7')
                        {
                            s[k]=a[i];
                            k++;
                        }
                    else
                    {
                      break;
                    }
                }
                d=atoi(s);
                t=5;
                for(i=1;i<=366;i++)
                {
                        if(t%7==d || (t%7==0 && d==7))
                        {
                            count++;
                        }
                        t++;
                }

                printf("%d",count);
        }


        //month
        else
        {
                k=0;
                for(i=0;;i++)
                {
                    if(a[i]>='0' && a[i]<='31')
                    {
                        s[k]=a[i];
                        k++;
                    }
                    else
                     break;
                }

                d=atoi(s);

                if(d<=29)
                    printf("12");
                else if(d==30)
                    printf("11");
                else if(d==31)
                    printf("7");
        }

        return 0;
}
