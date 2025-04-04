#include<stdio.h>
int main()
{
    int mark[100],i,sum=0,avg;
    printf("enter 3 marks\n");
    for (i=1;i<=3;i++)
    {
        scanf("%d",&mark[i]);
    }
    for (i=1; i<=3;i++)
    {
        sum=sum+mark[i];
    }
    printf("sum=%d\n",sum);
    avg=sum/5;
    printf("\navg of mark =%d\n",avg);
    
    
    

}