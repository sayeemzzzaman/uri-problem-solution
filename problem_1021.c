#include <stdio.h>

int main() {

    double n;
    int n100,n50,n20,n10,n5,n2,n1,n050,n025,n010,n005,n001,p;
    scanf("%lf",&n);
    p = n * 100;
    n100 = p/10000;
    p = p%10000;
    n50 = p/5000;
    p = p%5000;
    n20 = p/2000;
    p = p%2000;
    n10 = p/1000;
    p = p%1000;
    n5 = p/500;
    p = p%500;
    n2 = p/200;
    p = p%200;
    n1 = p/100;
    p = p%100;
    n050 = p/50;
    p = p%50;
    n025 = p/25;
    p = p%25;
    n010 = p/10;
    p = p%10;
    n005 = p/5;
    p = p%5;
    n001 = p/1;
    p = p%1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n1);
    printf("%d moeda(s) de R$ 0.50\n",n050);
    printf("%d moeda(s) de R$ 0.25\n",n025);
    printf("%d moeda(s) de R$ 0.10\n",n010);
    printf("%d moeda(s) de R$ 0.05\n",n005);
    printf("%d moeda(s) de R$ 0.01\n",n001);

    return 0;
}