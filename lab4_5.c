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
        g[0]=1;
        g[1]=2;
        g[2]=3;
        g[3]=4;
        for(j=0; j<strlen(w[i]); j++)
        {
            if(w[i][j]=='A')
            {
                t=g[1];
                g[1]=g[2];
                g[2]=t;
            }
            else if(w[i][j]=='B')
            {
                t=g[0];
                g[0]=g[3];
                g[3]=t;
            }
            else if(w[i][j]=='C')
            {
                t=g[0];
                g[0]=g[2];
                g[2]=t;
                t=g[1];
                g[1]=g[3];
                g[3]=t;
            }
            else if(w[i][j]=='D')
            {
                t=g[0];
                g[0]=g[1];
                g[1]=t;
                t=g[2];
                g[2]=g[3];
                g[3]=t;
            }
            else if(w[i][j]=='E')
            {
                t=g[0];
                g[0]=g[3];
                g[3]=t;
                t=g[1];
                g[1]=g[2];
                g[2]=t;
            }
        }
        for(k=0; k<4; k++)
        {
            if(g[k]==1)
            {
                printf("%d\n",k+1);
            }
        }
    }
    return 0;
}
