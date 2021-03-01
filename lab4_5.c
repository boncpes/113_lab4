#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,t;
    int g[4]= {1,2,3,4};
    scanf("%d",&n);
    char w[n][50];
    for(i=0; i<n; i++)
    {
        scanf("%s[^\n]",w[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<strlen(w[i]); j++)
        {
            switch(w[i][j])
            {
            case 'A':
            {
                t=g[1];
                g[1]=g[2];
                g[2]=t;
            }
            case 'B':
            {
                t=g[0];
                g[0]=g[3];
                g[3]=t;
            }
            case 'C':
            {
                t=g[0];
                g[0]=g[2];
                g[2]=t;
                t=g[1];
                g[1]=g[3];
                g[3]=t;
            }
            case 'D':
            {
                t=g[0];
                g[1]=g[0];
                g[1]=t;
                t=g[2];
                g[2]=g[3];
                g[3]=t;
            }
             case 'E':
            {
                t=g[0];
                g[0]=g[3];
                g[3]=t;
                t=g[1];
                g[1]=g[2];
                g[2]=t;
            }
            }
        }
    }
    printf("1\n");
    for(i=0;i<4;i++)
    {
        if(g[i]==1)
        {
            printf("%d",i+1);
        }
    }
    return 0;
}
