#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char w[200],b[20];
    scanf(" %200[^\n]s",w);
    b[0]=w[0];
    k=0;
    for(i=1; i<strlen(w)-1; i++)
    {
        if(w[i]==0)
        {
            break;
        }
        if(b[k]!=w[i])
        {
            k++;
            b[k]=w[i];
        }
    }
    printf("%s",b);

    return 0;
}
