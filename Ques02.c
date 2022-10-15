#include <stdio.h>
// A function to calculate HCF of two numbers. (TSRS)
int HCF(int, int);
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    printf("HCF of %d & %d is : %d", a, b, HCF(a, b));

    printf("\n");
    return 0;
}
int HCF (int x, int y)
{
    int min, hcf;
    min = (x < y) ? x : y;
    for (int i=1; i<=min; i++)
    {
        if(x % i == 0 && y % i == 0)
            hcf = i;
    }
    return hcf;

}
