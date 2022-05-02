#include<stdio.h>
int main()
{
    int size,i,a[30];
    int even_sum=0,odd_sum=0;
    printf("please enter size of array: ");
    scanf("%d",&size);
    printf("\nplease enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            even_sum=even_sum+a[i];
        }
        else
        {
            odd_sum=odd_sum+a[i];
        }
    }
printf("sum of all odd number is:%d\n",odd_sum);
printf("sum of all even number is:%d\n",even_sum);
return 0;
}
