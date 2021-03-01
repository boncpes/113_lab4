#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,p=0;
    char c[11][4]= {"i","of","the","on","at","for","with","a","an","in","and"};
    char w[1000],b[20];
    scanf("%s[^\n]",w);
    j=0;
    char *token = strtok(w," ");
    while(token != NULL)
    {
         printf("%s\n",token);
         token = strtok(NULL," ");
    }
    return 0;
}
