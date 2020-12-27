#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int numbers[5] = {1,3,6,2,4};
	int temp;
	
	for (int i=0;i<5;i++)
	{
		for(int j=0;j<5-i-1;j++)
		{
			if(numbers[j]>numbers[j+1])
			{
				temp=numbers[j];
				numbers[j]=numbers[j+1];
				numbers[j+1]=temp;
			}
		}
	}
	
	
	for (int i=0; i<5;i++)
	{
		printf("%d",numbers[i]);
	}
	printf("\n");
	return 0;
}