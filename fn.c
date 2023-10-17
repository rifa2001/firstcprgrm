#include<stdio.h>
#include<stdlib.h>
int num1,num2;
void sayhello(num1,num2)
{
    int sum=num1+num2;
    printf("%d",sum);


}


int main()
{

    printf("enter a number");
    scanf("%d",&num1);
    printf("enter another number");
    scanf("%d",&num2);
    sayhello(num1,num2);
    return 0;
}


