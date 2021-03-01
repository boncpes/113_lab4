#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,p=0;
    char c[11][4]= {"i","of","the","on","at","for","with","a","an","in","and"};
    char w[1000],b[20];
    char * pch;
    scanf("%[^\n]s",w);
    pch = strtok(w," ");
    while (pch != NULL)
    {
        printf ("%s\n",b[0]);
        pch = strtok (NULL, " ");
    }
    return 0;
}
