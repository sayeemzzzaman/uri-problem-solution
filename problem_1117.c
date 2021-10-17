#include<stdio.h>


int main()
{
    float n,sum=0;
    int i,check=0;

    while(1)
    {
        scanf("%f",&n);
        if(n<0 || n>10)printf("nota invalida\n");
        else
        {
            sum+=n;
            check++;
        }
        if(check==2)break;
    }
    printf("media = %.2f\n",sum/2);

    return 0;
}