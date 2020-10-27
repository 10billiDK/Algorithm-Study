#include <stdio.h>
#include <cs50.h>

int loop(int array[]);
int SORT(int array1[]);
void IsBool(int array2[], int array3[]);

int main(void)
{
	int numbers1[5]={1,2,3,4,5};
	int numbers2[5]={5,4,3,2,1};
	int numbers3[5]={1,4,2,5,8};
	int numbers4[5]={2,5,4,3,1};
	int numbers5[5]={1,1,1,3,2};
	int numbers6[5]={2,1,1,3,1};
	
	printf("입력값:");
	loop(numbers1);
	printf(",");
	loop(numbers2);
	printf("--> 출력값:");
	IsBool(numbers1,numbers2);
	printf("\n");
	
	printf("입력값:");
	loop(numbers3);
	printf(",");
	loop(numbers4);
	printf("--> 출력값:");
	IsBool(numbers3,numbers4);
	printf("\n");
	
	printf("입력값:");
	loop(numbers5);
	printf(",");
	loop(numbers6);
	printf("--> 출력값:");
	IsBool(numbers5,numbers6);
	printf("\n");
	return 0;
}

int loop(int array[])
{
	for(int i=0; i<5;i++)
	{
		printf("%d",array[i]);
	}
	
	return 0;
}

int SORT(int array1[])
{
	int temp;
	int temparray1[5];
	
	
	for (int i=0;i<5;i++)
	{
		for(int j=0;j<5-i-1;j++)
		{
			if(array1[j]>array1[j+1])
			{
				temp=array1[j];
				array1[j]=array1[j+1];
				array1[j+1]=temp;
			}
		}
	}
	
	for (int i=0; i<5;i++)
	{
		temparray1[i] = array1[i];
	}
	
	return loop(temparray1);
}

void IsBool(int array2[], int array3[])
{
	SORT(array2);
	SORT(array3);
	
	for(int j=0;j<5;j++)
	{		
		if(array2[j]!=array3[j])
		{
			printf("False");
			return;
		}
		
	}
	printf("True");
}