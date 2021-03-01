#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char w[200],b[20];
    scanf(" %200[^\n]s",w);
    b[0]=w[0];
    k=0;
    for(i=1; i<strlen(w); i++)
    {
        if(b[k]!=w[i])
        {
            k++;
            b[k]=w[i];
        }
    }
    printf("%s",b);

    return 0;
}
