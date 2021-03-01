#include<stdio.h>
int main()
{
    int n,i,j,k,y,p,count,t,min,max;
    scanf("%d",&n);
    k=n;
    for(i=n; i>0; i--)
    {
        if(i%3==0)
        {
            n=i;
            y=n/3;
            break;
        }
    }
    int a[k][3],b[y],local[2];
    for(i=0; i<k; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    t=0;
    y=0;
    count=2;
    for(i=0; i<n; i++)
    {

        for(j=0; j<3; j++)
        {
            if(j==0)
            {
                t+=a[i][j]*4;
            }
            else if(j==1)
            {
                t+=a[i][j]*2;
            }
            else if(j==2)
            {
                t+=a[i][j]*1;
            }
        }
        if(count==0)
        {
            b[y]=t;
            y++;
            t=0;
            count=3;
        }
        count--;
    }
    for(i=0; i<y; i++)
    {
        if(i==0)
            max=b[i];
        else if(b[i]>max)
        {
            max=b[i];
            local[0]=i;
        }
    }
    for(i=0; i<y; i++)
    {
        if(i==0)
            min=b[i];
        else if(b[i]<min)
        {
            min=b[i];
            local[1]=i;
        }
    }
    for(i=0; i<2; i++)
    {
        printf("%d ",local[i]+1);
    }

    return 0;
}
