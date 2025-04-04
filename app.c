#include<stdio.h>
int main ()

{
    int a,b,n;
    float r;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("1Addition\n2.subtraction\n3.multiplication\n4.division\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:r=a+b;
        printf("%d+%d=%f\n",a,b,r);
        break;

        case 2:r=a-b;
        printf("%d-%d=%f\n",a,b,r);
        break;

        case 3:r=a*b;
        printf("%d*%d=%f\n",a,b,r);
        break;

        case 4:r = (float)a / b; 
        printf("%d/%d=%.2f\n",a,b,r);
        break;
    default:
        printf("please enter the number\n");
    }
}