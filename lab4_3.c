#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char w[200];
    scanf("%200[^\n]s",w);
    printf("%c",w[0]);
    for(i=1; i<strlen(w); i++)
    {
        if(w[i-1]!=w[i])
        {
            printf("%c",w[i]);
        }
    }
    return 0;
}
