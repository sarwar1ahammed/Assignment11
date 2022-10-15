#include <stdio.h>
// A function to calculate LCM of two numbers. (TSRS)
int LCM (int, int);  // Function Declaration.
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    printf("LCM of %d & %d is %d", a, b, LCM(a, b));  // Function Call (Actual Arguments)

    printf("\n");
    return 0;
}
int LCM (int x, int y)  // Function Definition (Formal Arguments)
{
    for(int i=1; i<=x*y; i++)
    {
        if (i % x == 0 && i % y == 0)
            return i;
    }
}
