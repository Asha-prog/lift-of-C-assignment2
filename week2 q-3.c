#include<stdio.h>
int main()
{
    int num,firstdigit,digitcount,lastdigit,a,b,swapnum;
    printf("\nplease enter any number: ");
    scanf("%d",&num);
    digitcount=log10(num);
    firstdigit=num/pow(10,digitcount);
    lastdigit=num%10;
    a=firstdigit*(pow(10,digitcount));
    b=num%a;
    num=b/10;
    swapnum=lastdigit*(pow(10,digitcount))+(num*10+firstdigit);
    printf("\n the number after swaping=%d",swapnum);
    return 0;
}