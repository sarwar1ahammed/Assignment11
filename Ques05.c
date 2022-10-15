#include <stdio.h>
// A function to print first N prime numbers (TSRN)
void nPrime(int);
int main()
{
    int n;
    printf("Enter how many terms requires : ");
    scanf("%d", &n);
    nPrime(n);
    printf("\n");
    return 0;
}

void nPrime(int a)
{
    int flag, num=2,c=0;
    while(c<a)
    {                
            flag=0;
            for (int divider=2; divider<=(num/2); divider++)
            {
                if(num % divider == 0) 
                flag++;
            }

            if(flag == 0) 
            {
                printf("%d ",num);
                c++;
            }
        
        num++;            
            
    }   

}
