#include<stdio.h>
int main()
{
    int arr[10],i,key,flag=0;
    printf("enter 8 number\n");
    for ( i =1; i <=8; i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("enter the key value\n");
    scanf("%d",&key);
    for ( i = 1; i <=8; i++)
    {
        if (arr[i==key])
        {
            printf("element %d is found in %d position\n", key,i);
            flag=1;
        }
        if (flag==0)
        {
            printf("element not found\n");
        }
        
        
    }
    
    
}