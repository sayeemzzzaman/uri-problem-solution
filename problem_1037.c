#include <stdio.h>
#include <math.h>

    int main() {

    float n;
    scanf("%f",&n);

    if (n < 0 || n > 100) {
        printf("Fora de intervalo\n");
    }
    else if (n >= 0 && n <= 25.0000)printf("Intervalo [0,25]\n");
    else if (n > 25 && n <= 50.0000000)printf("Intervalo (25,50]\n");
    else if (n > 50 && n <= 75.0000000)printf("Intervalo (50,75]\n");
    else printf("Intervalo (75,100]\n");
    return 0;
}