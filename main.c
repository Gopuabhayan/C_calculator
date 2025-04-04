#include<stdio.h>
int main()
{   
    {
        int l,w,area,perimeter;
        printf("enter a lenght\n");
        scanf("%d",&l);
        printf("enter a width\n");
        scanf("%d",&w);
        area=l*w;
        perimeter=2*l+w;
        printf("perimeter=%dcm\n",perimeter);
        printf("area=%dcm\n",area);
    }
         
}
