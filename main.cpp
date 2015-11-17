#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int fun(int *k)
{
    *k += 4;
    return 3 * (*k) - 1;
}

int x = 0;

int f1()
{
  x = 5;
  return x;
}

int f2()
{
  x = 10;
  return x;
}

int main()
{
    /** Ejercicio 1 **/
    /*int i = 10, j = 10, sum1, sum2;
    sum1 = (i / 2) + fun(&i);
    sum2 = fun(&j) + (j / 2);
    cout << sum1 << "\t" << sum2 << endl;*/

    /** Ejercicio 3 **/
    /*int a = 3;
    int b = 4;
    int c = 5;
    cout << a+b-c*b/2 << endl;
    cout << a+b-b*c/2 << endl;
    bool d = 0;
    bool e = 1;
    cout << (d&&e||1) << endl;
    cout << (d&&(e||1)) << endl;
    cout << ((d&&e)||1) << endl;*/
    
    /**Ejercicio 5**/
    /*
    int p = f1() + f2();
    printf("%d ", x);
    getchar();
    */

    /**Ejercicio 7**/
    /*int i = 1;
    cout << i << ++i << i++;
    
    int a[] = {1, 2, 3};
    int *pa; 

    pa = &a[0];
    printf("a[0] = %d\ta[1] = %d\ta[2] = %d\n",*(pa), *(pa++),*(++pa)); // 3 2 2

    pa = &a[0];
    printf("a[0] = %d\ta[1] = %d\ta[2] = %d\n",*(pa++),*(pa),*(++pa)); // 2 2 2
   
   pa = &a[0];
   printf("a[0] = %d\ta[1] = %d\ta[2] = %d\n",*(pa++),*(++pa), *(pa)); // 2 2 1
    */

    /** Ejercicio 9 **/
    time_t inicio, fin;
    inicio = time(NULL);
    int a = 10;
    int b = 32;
    int c = a+b*a/4-2+a*b;
    fin = time(NULL);
    inicio = time(NULL);
    float d = 1.256;
    float e = 3.1416;
    float f = d+e*d/4-2+d*e;
    fin = time(NULL);
    
    
    return 0;
}
