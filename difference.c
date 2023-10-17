#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}},col1=0,col2=2;
    for(int i=0;i<2;i++)
        {
           int difference=a[i][col1]-a[i][col2];


        printf("%d\n",difference);
        }

    return 0;
}
