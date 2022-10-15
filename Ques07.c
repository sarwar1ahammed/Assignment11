#include <stdio.h>
// A function to print first N terms of Fibonacci series (TSRN)
void Fibo(int);
int main()
{
    int a, first=0, second=1;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("First %d terms Fibonacci series are : %d %d ", a, first, second);
    Fibo(a);
    printf("\n");
    return 0;
}
void Fibo(int n)
{
    int first=0, second=1, third=0;
    for (int i=1; i<=(n-2); i++)
    {
        third = first + second;
        printf("%d ", third);
        first = second;
        second = third;
    }
}
