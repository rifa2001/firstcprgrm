#include<stdio.h>
int main()
{
    int arr[5]={15,29,35,86,56};
    int max=arr[0];

      for (int i=0;i<5;i++)
{
       if(arr[i]>max)
           max=arr[i];
}
    printf("Largest number in array: %d\n",max);
    return 0;
}



