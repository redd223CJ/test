#include <stdio.h>

static unsigned long fibo(unsigned long n);

int main()
{
    printf("Hello World\n");

    printf("It is a test branch\n");
    
    // another test in other branch commit

    unsigned long n = 15;
    printf("fibo of %lu is %lu\n", n, fibo(n));

    return 0;
}

int test()
{
    return 1;
}

static unsigned long fibo(unsigned long n)
{
    if(n <= 1)
        return n;
    unsigned long a=0, b=1, temp;
    for(long i = 0; i < n-1; i++)
    {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}