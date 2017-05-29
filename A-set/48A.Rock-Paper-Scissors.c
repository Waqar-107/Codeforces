cmp(b,"paper")==0 && strcmp(a,"rock")==0 && strcmp(c,"rock")==0)
        {
            printf("M");
        }

        else if(strcmp(b,"scissors")==0 && strcmp(a,"paper")==0 && strcmp(c,"paper")==0)
        {
            printf("M");
        }

        //Sharic
        else if(strcmp(c,"rock")==0 && strcmp(a,"scissors")==0 && strcmp(b,"scissors")==0)
        {
            printf("S");
        }

        else if(strcmp(c,"paper")==0 && strcmp(a,"rock")==0 && strcmp(b,"rock")==0)
        {
            printf("S");
        }

        else if(strcmp(c,"scissors")==0 && strcmp(a,"paper")==0 && strcmp(b,"paper")==0)
        {
            printf("S");
        }

        //tie
        else
            printf("?");

        return 0;
}
