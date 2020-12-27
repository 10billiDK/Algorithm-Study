#include <stdio.h>

void sort(int *n, int *arr);

int main(void)
{
    int n=7;
    int arr[7] = {0,25,10,17,6,12,9};
    sort(&n,arr);
    
    for (int i=0; i<n;i++)
    {
        printf("%d\n",*(arr+i));
    }
    return 0;
}

void sort(int *n, int *arr)
{
    int temp;
    // int *n = sizeof(arr)/sizeof(int); //앞에서 n을 정의해줬으므로 굳이 다시 정의할 필요 없다. 
    
    for (int i=0;i<*n;i++)
	{
    for(int j=0;j<*n-i-1;j++)
		{
			if(*(arr+j)>*(arr+j+1))
			{
				temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}
    return;
}