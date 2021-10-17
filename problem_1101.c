#include<stdio.h>


int main()
{
    int i,x,y,temp,sum=0,j;
    
    while(1)
    { 
        scanf("%d%d",&x,&y);
        if(x<=0 || y<=0)break;
        sum=0;
        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        for(j=x;j<=y;j++)
            {
                sum+=j;
                printf("%d ",j);
            }
        printf("Sum=%d\n",sum); 
    }

    return 0;
}