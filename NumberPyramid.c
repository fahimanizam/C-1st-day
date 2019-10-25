#include<stdio.h>
int main()
{
    int i,space,rows,k=0,counter1=0,counter2=0;
    printf("The number of rows : ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i,k=0)
    {
        for(space=1;space<=rows-i;++space)
        {
            printf("  ");
            ++counter1;
        }
        while(k!=2*i-1)
        {
            if(counter1<=rows-1)
            {
                printf("%d ",i/*+k*/);
                ++counter1;
            }
            else
            {
               ++counter2;
                //++counter1;
                printf("%d ",(i/*+k-2*counter2*/));

            }
            ++k;
        }
        counter2=counter1=k=0;
        printf("\n");
    }
    return 0;
}
