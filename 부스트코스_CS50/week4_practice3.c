#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int find_mid(int* arr1, int length);

int  main(void)
{
    int array1[5] = {1,2,3,4,5};
    int array2[4] = {2,2,2,4};

    printf("친구의 집이 1,2,3,4,5에 위치할 때, 최적의 장소는:%d\n", find_mid(array1,sizeof(array1)/sizeof(int)));
    printf("친구의 집이 2,2,2,4에 위치할 때, 최적의 장소는:%d\n", find_mid(array2, sizeof(array2)/sizeof(int)));
    return 0;

}

int find_mid(int* arr1, int length)
{
    if (length % 2 == 0)
    {
       return (arr1[length/2] + arr1[length/2 - 1])/2;
    }
    else
    {
        return arr1[(length-1)/2];
    }

}