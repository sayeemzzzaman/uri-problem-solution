#include<stdio.h>

int main()
{
    float i=0;
    int count=0,j;

    for(i=0.0;i<2.2;i+=0.2)
    {
        for(j=1;j<4;j++)
        { 
            if(i==1.0 || (int)i==2 || i==0.0)
            {
                printf("I=%.0f J=%.0f\n",i,j+i);
            }
            else
            {
                printf("I=%.1f J=%.1f\n",i,j+i);
            }
        
        }
    }
    return 0;
  
}
