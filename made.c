#include<stdio.h>
int main()
{
    int n,r;
    printf("enter a number\n");
    scanf("%d",&n);
    r=n%2;
    if (r==0)
    {
        printf("the number is evan\n");
    }
    else
    {
        printf("the number is odd\n");
    }
    
}