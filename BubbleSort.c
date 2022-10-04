#include <stdio.h>

int main()
{
     int a[5] = {0};
    int num, i, j, n;
    // intput
    for(i=0; i<5; i++)
    {
        scanf("%d", &num);
        a[i] = num;
    }
    //show input
    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    //BubbleSort
    for(j=0; j<5; j++)
    {
        for(i=4; i>0; i--)
        {
            if(a[i]>=a[i-1])
            {
                num = a[i];
                a[i] = a[i-1];
                a[i-1] = num;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}