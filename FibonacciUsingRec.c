#include<stdio.h>

int fibo(int n);

int main()
{
    int i, f=0, n;

    printf("Enter no of terms: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        f = fibo(i);
        printf("%d ", f);
    }

    return 0;
}

int fibo(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return(fibo(n-1) + fibo(n-2));
}

