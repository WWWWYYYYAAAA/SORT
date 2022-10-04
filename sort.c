#include <stdio.h>

int main()
{
    int a[5] = {0};
    int num, i, j, max, n;
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
    //compare with each number
    for(i=0; i<5; i++)
    {
        max = a[i];
        n = i;
        for(j=i+1; j<5; j++)
        {
            if(max<=a[j])
            {
                max = a[j];
                n = j;
            }
        }
        num = max;
        a[n] = a[i];
        a[i] = max;
    }
    //output
      for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}