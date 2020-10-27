#include <stdio.h>
#include <cs50.h>

int loop(int array[]);
int *SORT(int array1[]);
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
	SORT(numbers1);
	printf(",");
	SORT(numbers2);
	printf("--> 출력값:");
	IsBool(numbers1,numbers2); //함수를 이렇게 두 번 갈겨서 쓰면 포인터를 써줘야 함.
	printf("\n");
	
	printf("입력값:");
	SORT(numbers3);
	printf(",");
	SORT(numbers4);
	printf("--> 출력값:");
	IsBool(numbers3,numbers4);
	printf("\n");
	
	printf("입력값:");
	SORT(numbers5);
	printf(",");
	SORT(numbers6);
	printf("--> 출력값:");
	IsBool(numbers5,numbers6);
	printf("\n");
	return 0;
}


int *SORT(int array1[])
{
	int temp;
	
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
	return array1;
}

void IsBool(int array2[], int array3[])
{
	
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