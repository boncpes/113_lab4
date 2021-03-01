#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,k=0;
    char w[1000],b[20];
    scanf("%1000[^\n]s",w);
    int j=0;
    for(i=0; i<strlen(w); i++)
    {
        if(w[i]!=' ')
        {
            b[j]=w[i];
            j++;
        }
        else
        {
            if(i==0)
            {
                if(strcmp(b,i)||strcmp(b,of))
                {
                    printf("%c",toupper(b[0]));
                }
            }
            else
            {
                printf("")
            }

    }

    return 0;
}
