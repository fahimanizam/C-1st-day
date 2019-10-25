#include<stdio.h>

int main()
{
    int a,b,c;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);
    if (a>b&&a>c)
    {
        printf("A is the biggest number");
    }
    else if(b>a&&b>c)
    {
        printf("B is the greatest number.");
    }
    else
    {
        printf("C is the greatest number");
    }
}
