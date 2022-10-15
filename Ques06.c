#include <stdio.h>
// A function to print all Prime numbers between two given numbers. (TSRN)
void allPrime(int, int);
int main()
{
    int x, y;
    printf("Enter range : ");
    scanf("%d %d", &x, &y);
    allPrime(x, y);
    printf("\n");
    return 0;
}
void allPrime(int a, int b)
{
    int flag;
    for (int i=a; i<=b; i++)
    {
        flag=0;
        for (int divider=2; divider<=(i/2); divider++)
        {
            if (i % divider == 0)
                flag++;
        }
        if (flag == 0)
        printf("%d ", i);
    }
}
