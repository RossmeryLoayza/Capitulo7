#include <stdio.h>
#include <stdlib.h>

int a , b;
/*int fun(int *k)
{
    *k += 4;
    return 3 * (*k) - 1;
}
*/
int fun()
{
    a += 10;
    return a;
}

int main()
{
/*
    int i = 10, j = 10, sum1, sum2;
    sum1 = (i / 2) + fun(&i);
    sum2 = fun(&j) + (j / 2);
    printf("%d \n", sum1);//sum1 = 46, porque i es modificado despues de la operacion
    printf("%d \n", sum2);//sum1 = 48, porque j es modificado antes de la operacion
*/

    /** ejercicio 8 **/

    a = 10;
    b = a + fun();
    printf("With the function call on the right, ");
    printf(" b is: %d\n", b);
    a = 10;
    b = fun() + a;
    printf("With the function call on the left, ");
    printf(" b is: %d\n", b);

    return 0;
}
