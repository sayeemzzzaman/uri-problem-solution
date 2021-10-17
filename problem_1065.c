#include<stdio.h>


int main()
{
    int count=0,n,i=1;

    do {
        scanf("%d",&n);
        if(n%2==0)
        {
            count++;
        }
        i++;
    }while(i<=5);

    printf("%d valores pares\n",count);
    return 0;
}