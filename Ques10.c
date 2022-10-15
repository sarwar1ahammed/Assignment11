#include <stdio.h>
/*
    The sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 
    using the function.
*/
int fact(int);
int sum();
int main()
{
    int a;
    printf("Value : ");
    scanf("%d", &a);
    printf("The Sum of the series is : %d", sum());

    printf("\n");
    return 0;
}
int fact(int n)
{
    int factorial=1;
    for (int i=1; i<=n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;       
}
int sum()
{
    int sum=0;
    for (int i=1; i<=5; i++)
    {
        sum = sum + fact(i)/i;
    }
    return sum;
}
