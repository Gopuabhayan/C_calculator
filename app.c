#include<stdio.h>
int main ()

{
    int a,b,r,n;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    printf("Addition\n.subtraction\n.multiplication\n.division\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:r=a+b;
        printf("%d+%d=%d",a,b,r);
        break;

        case 2:r=a-b;
        printf("%d-%d=%d",a,b,r);
        break;

        case 3:r=a*b;
        printf("%d*%d=%d",a,b,r);
        break;

        case 4:r=a/b;
        printf("%d/%d=%d",a,b,r);
        break;
    default:
        printf("please enter your number\n");
    }
}