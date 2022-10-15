#include <stdio.h>
// A function to find the next prime number of a given number. (TSRS)
int nxPrime(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Next Prime number is %d", nxPrime(n));
    printf("\n");
    return 0;
    
}
int nxPrime(int x)
{
    int i, divider, flag=0;
    for (i=x+1; 1; i++)
    {
        flag = 0;
        for (divider=2; divider<=(i/2); divider++)
        {
            if (i % divider == 0)
                flag++;        
        }
        if (flag == 0)
            return i;

    }

}
