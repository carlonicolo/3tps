#include <stdio.h>

int fib(int n){
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n){
    int r = n , p=1, u=0;
    for (int i = 0; i < n; i++) {
        r = p + u;
        u = p;
        p = r;
    }
    return r;
}

int main()
{
   // printf() displays the string inside quotation
   printf("Hello, World!\n");
   int a = 5;
   float b = 5.0;
   printf("Il valore della variabile a e': %d\n", a);
   printf("Il valore della variabile b e': %f\n", b);
   printf("%d\n",fib(6));
   printf("%d\n",fibonacci(7));
   return 0;
}
