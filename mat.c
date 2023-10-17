#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,a,b,first[10][10],second[10][10], sum[10][10];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d",&i);
    printf("Enter the elements of first matrix\n");
    for (a=0;a<i;a++)
        for (b=0;b<j;b++)
            scanf("%d", & first[a][b]);
            printf("Enter the elements of second matrix\n");
    for (a=0;a<i;a++)
        for (b=0;b<j;b++)
            scanf("%d",&second[a][b]);
    printf("Sum of entered matrices\n");
    for (a=0;a<i;a++)
    {
        for (b=0;b<j;b++)
        {
            sum[a][b] = first[a][b]+second[a][b];
            printf("%d\t", sum[a][b]);
        }
        printf("\n");
    }
    return 0;
}
