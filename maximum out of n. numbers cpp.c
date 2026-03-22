#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,num,max;
    printf("how many numbers you wanna input??");
    scanf("%d",&n);
    printf("enter number 1:");
    scanf("%d",&max);
    for(i=2;i<=n;i++)
    {
        printf("enter number %d:",i);
        scanf("%d",&num);
        if(num > max)
        {
            max = num;
        }
    }
    printf("maximum number is %d ",max);

    return 0;
}
