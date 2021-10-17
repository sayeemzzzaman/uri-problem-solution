#include<stdio.h>
#include <math.h>

int main()
{
 double a, b, c, t,z,y;
 scanf("%lf %lf %lf", &a, &b, &c);

 if(((b * b) - 4 * a * c) < 0 || a == 0){
     printf("Impossivel calcular\n");
 }
 else{
  t = sqrt((b * b) - 4 * a * c);
  z = (-b+t) / (2*a);
  y = (-b-t)/ (2*a);
  printf("R1 = %.5lf\nR2 = %.5lf\n", z, y);
    }
 return 0;
}