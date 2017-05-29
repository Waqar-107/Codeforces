#include<stdio.h>
#include<string.h>

int main()
{
    int i,k=0,j;
    char s1[100],s2[200];

    gets(s1);

    for(i=0; i<strlen(s1); i++)
    {

       if(!(s1[i]=='A' || s1[i]=='a' || s1[i]=='E' || s1[i]=='e' || s1[i]=='I' || s1[i]=='i' || s1[i]=='O' || s1[i]=='o' || s1[i]=='U' || s1[i]=='u' || s1[i]=='Y' || s1[i]=='y' ))
        {
                    s2[k]='.';
                    s2[k+1]=s1[i];
                    k+=2;
        }
    }

    j=k;

    for(i=0;i<j;i++)
    {
        s2[i]=tolower(s2[i]);
    }

    for(i=0;i<j;i++)
    {
        printf("%c",s2[i]);
    }


    return 0;

}
