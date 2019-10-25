#include<stdio.h>

int main()
{
    int n,k,s;
    scanf("%d",&n);
    s=0;
    k=1;
    do
    {
        s = s+k;
        k=k+1;
    }while(k<=n);
    printf("%d",s);
}
