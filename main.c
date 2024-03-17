#include <stdio.h>

int main(void){
    int a, reznya, first_cif, last_cif, bufer, stepen = 0;

    scanf("%d", &a);
    bufer = a;
    while (bufer != 0)
    {
        stepen += 1;
        bufer /= 10;
    }
    reznya = 1;
    last_cif = a % 10;
    for (int i = 0; i < stepen - 1; ++i) reznya *= 10;
    first_cif = a / reznya;
    a = a % reznya;
    a = a / 10;
    a = last_cif * reznya / 10 + a;
    a = a * 10 + first_cif;

    printf("%d\n", a);
}
