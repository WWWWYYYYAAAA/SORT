#include <stdio.h>

int QSort(int a[5],int b[5], int size, int loc); 

int main()
{
    int a[5] = {0}, b[5] = {0};
    int num, i;
     for(i=0; i<5; i++)
    {
        scanf("%d", &num);
        a[i] = num;
    }
     for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    QSort(a, b, 5, 0);
     for(i=0; i<5; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}

int QSort(int a[5],int b[5], int size, int loc)
{
    int left[5], right[5], i, j=0, k=0, target=a[0];
    for(i=1; i<size; i++)
    {
        if(a[i] < target)
        {
            left[j] = a[i];
            j++;
        }
        else if(a[i] >= target)
        {
            right[k] = a[i];
            k++;
        }
    }
    b[j+loc] = a[0];
    if(size == 3)
    {
        b[j-1+loc] = left[0];
        b[j+1+loc] = right[0];
    	return 0;
	}
    else if(size == 2 && j == 1)
    {
        b[j-1+loc] = left[0];
    }
     else if(size == 2 && j == 1)
    {
        b[j+1+loc] = right[0];
    }
    QSort(left, b, j, loc);
    QSort(right, b, k, loc+j+1);
    return 0;
}