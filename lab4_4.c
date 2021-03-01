#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,p=0,t=0;
    char c[11][4]= {"i","of","the","on","at","for","with","a","an","in","and"};
    char w[1000],b[20];
    char * pch;
    scanf("%1000[^\n]s",w);
    pch = strtok(w," ");
    while (pch != NULL)
    {
        for(i=0;i<11;i++)
        {
            if(strcmp(pch,c[i]))
                    t++;
        }
        if(p==0||t==11)
        {
            printf ("%c",toupper(pch[0]));
        }
        pch = strtok (NULL, " ");
        t=0;
        p++;
    }
    return 0;
}
