#include<stdio.h>
int main()
{
    int a[10],i,s,c=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    for(i=0;i<5;i++)
    {
        if(a[i]==s)
        {
            printf("Value found at [%d]",i);
            break;
        }
        if (c==5)
        printf("Value not found");
    }
}
