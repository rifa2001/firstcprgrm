
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int prime=2;
    if(n%2==0)
    {
        if (prime)
        {
            printf("it is prime");
        }

        else{
          printf("not prime");
        }
    }
        else
            {
            printf("it is prime");
        }



    return 0;

    }

