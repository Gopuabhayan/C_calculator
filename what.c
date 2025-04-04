#include<stdio.h>
int main()
{
    int n,rem,rev=0,tem;
    printf("enter a number\n");
    scanf("%d",&n);
    tem=n;
    while (n>0)
    {
        rem=n%10;
        rev=(rev*10)+1;
        n=n/10;
    }
    printf("the revese of %d is %d\n",tem,rev);
    if (tem==rev)
    {
        printf("%d is a palindrome number\n");
    }
    else{
        printf("%d is not  a palindrome number\n");
    }
}