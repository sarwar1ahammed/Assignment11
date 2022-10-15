#include <stdio.h>
// A function to print PASCAL Triangle. (TSRN)
int Fact(int);
int Comb(int, int);
void Pascal(int);
int main()
{
    int a, b;
    printf("Enter two value : ");
    scanf("%d %d", &a, &b);

    Pascal(a);

    printf("\n");
    return 0;
}

int Fact(int n)
{
    int fact=1;
    for (int i=1; i<=n; i++)
        fact = fact * i;
    return fact;
}

int Comb(int n, int r)
{
    return Fact(n) / (Fact(r) * Fact(n-r));
}

void Pascal(int n)
{
    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<=i; j++)
        {
                printf("%d ", Comb(i, j));
          
        }
        printf("\n");
    }
}
