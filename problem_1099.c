#include<stdio.h>


int main()
{
    int n,i,x,y,temp,sum=0,j;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        sum=0;
        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        for(j=x+1;j<y;j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }
            }
        printf("%d\n",sum); 
    }


    return 0;
}