#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,p=0;
    char c[11][4]= {"i","of","the","on","at","for","with","a","an","in","and"};
    char w[1000],b[20];
    scanf("%1000s[^\n]",w);
    j=0;
    for(i=0; i<strlen(w); i++)
    {
        if(w[i]==' ')
        {
            if(i==0)
            {
                for(k=0; k<11; k++)
                {
                    if(strcmp(b,c[k])==0)
                    {
                        printf("%c",toupper(b[0]));
                        strcpy(b, "");
                        j=0;
                    }
                }
            }
            else
            {
                for(k=0; k<11; k++)
                {
                    if(strcmp(b,c[k])==0)
                    {
                        p++;
                    }
                }
                if(p>0)
                {
                    printf("%c",toupper(b[0]));
                    p=0;
                    strcpy(b, "");
                    j=0;
                }
            }
        }
        else
        {
            b[j]=w[i];
            j++;
        }
        return 0;
    }
}
