#include<stdio.h>

int main()
{
    int L,S,R;
    printf("L = ");
    scanf("%d",&L);
    printf("S = ");
    scanf("%d",&S);
    do
    {
        R=(L%S),
        L = S;
        S = R;
    }
    while (R != 0);
    printf("%d is the greatest common domination.",L);
}
