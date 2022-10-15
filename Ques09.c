#include <stdio.h>
// Find the square of any number using the function.
int square(int);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Square of %d is : %d", a, square(a));

    printf("\n");
    return 0;
}
int square (int n)
{
    return n*n;
}
