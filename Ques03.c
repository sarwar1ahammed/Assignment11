#include <stdio.h>
// A function to check whether a given number is Prime or not. (TSRS)
int prime(int);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    prime (a);
    
    printf("\n");
    return 0;
}
int prime(int x)
{
    int flag=0;
    for (int divider=2; divider<=(x/2); divider++)
    {
        if (x % divider == 0)
            flag++;
    }
    if (flag == 0)
        return printf("Prime Number.");
    return printf("Not a Prime Number.");
    
}
