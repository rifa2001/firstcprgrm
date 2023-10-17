#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array1[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+array1[i];
    }
    printf("%d",sum);
    return 0;


}
