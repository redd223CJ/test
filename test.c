#include <stdio.h>
#include "t2.h"

static unsigned long fibo(unsigned long n);

int main()
{
    printf("Hello World\n");

    printf("It is a test branch\n");
    
    // another test in other branch commit

    unsigned long n = 15;
    printf("fibo of %lu is %lu\n", n, fibo(n));

    int a = 15;
    pt2(a);
    a -= 111;
   pt2(a);

    return 0;
}

static void pt2(int a)
{
    printf("n : %d -> %d\n", a, t2(a));
}
static unsigned long fibo(unsigned long t)
{
    if(t <= 1)
        return t;
    unsigned long a=0, b=1, temp;
    for(long i = 0; i < t-1; i++)
    {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}
