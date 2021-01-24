#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int fibo(int n)
{
    int a = 0, b = 1, c, i;
    if (n <= 1)
    {
        return n;
    }

    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main()
{

    int a, n;
    printf("Enter the number of which you want to calculate the Fibonacci Number of:");
    scanf(" %d", &n);
    printf("Press 1 if you want to find the fibonacci series Itetravely\n");
    printf("Press 2 if you want to find the fibonacci series Recursively\n");
    printf("Press 3 to, Exit\n");
    scanf(" %d", &a);
    switch (a)
    {
    case 1:

        printf("The %dth element of Fibonacci Series is:%d\n", n, fibo(n));
        break;
    case 2:

        printf("The %dth element of Fabonacci Series is:%d\n", n, fib(n));
        break;
    case 3:
        exit(1);
    default:
        printf("Please select the valid choice\nThanks for Using");
        break;
    }
    system("pause");
    return 0;
}
