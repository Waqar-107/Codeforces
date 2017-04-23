#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
        int i,j,k;
        int pi,pe,poi;
        char s[500];
        char p[10];

        cin>>s;
        char a[500];

        k=0;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='.')
                pi=i;


            if(s[i]=='e')
            {
                pe=i;
                break;
            }

            else
            {
                a[k]=s[i];
                k++;
            }
        }
        a[k]='\0';

        k=0;
        for(i=pe+1;i<strlen(s);i++)
        {
            p[k]=s[i];
            k++;
        }

        poi=atoi(p)+pi;

        //right shift
        for(i=pi;i<poi;i++)
        {
            a[i]=a[i+1];
        }

        a[poi]='.';
        int flag=1;
        //exception, 0.0
        for(i=poi+1;i<=strlen(a);i++)
        {
            if(a[i]!='0')
                continue;
            else
                {
                    j=i;
                }
        }
        if(j==strlen(a)-1)
        {
            //cout<<"yes";
            for(i=0;i<poi;i++)
                {
                    cout<<a[i];
                }

            return 0;
        }

        //if int then cut off the leading 0
        flag=0;
        if(strlen(a)<=poi+1)
        {
                for(i=0;i<strlen(a);i++)
                {
                    if(a[i]=='0' && flag==0)
                        continue;

                    else if(a[i]=='.')
                        break;

                    else
                        {
                            flag=1;
                            cout<<a[i];
                        }
                }

                //trailing 0
                int x=strlen(a)-pi;
                for(i=x;i<atoi(p);i++)
                    cout<<"0";
        }


    else
    {
        for(i=0;i<strlen(a);i++)
            {
                    cout<<a[i];
            }
    }
        return 0;
}
