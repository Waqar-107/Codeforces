#include<stdio.h>
int main()
{
        int w,y,p;

        scanf("%d%d",&y,&w);

        if(y>w)
        {
            p=6-y+1;
        }
        else
        {
            p=6-w+1;
        }

        switch(p)
        {
                    case 0:
                    printf("0/1");
                    break;

                    case 1:
                    printf("1/6");
                    break;

                    case 2:
                    printf("1/3");
                    break;

                    case 3:
                    printf("1/2");
                    break;

                    case 4:
                    printf("2/3");
                    break;

                    case 5:
                    printf("5/6");
                    break;

                    case 6:
                    printf("1/1");
                    break;

        }

        return 0;
}
