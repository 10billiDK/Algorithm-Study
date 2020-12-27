#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

const int NUMBER_OF_GRADES=9;
const string GRADESTABLE[2][9]={{"95","90","85","80","75","70","65","60","0"},{"A+","A","B+","B","C+","C","D+","D","F"}};

void PrintGradesTable(void);
string CalculateGrade(int score);

int main(void)
{
	PrintGradesTable();

	while(true)
	{
		int score = get_int("성적을 입력하세요 (0~100) : ");
		if (score==-1)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else if (score < 0 || score>100)
		{
			printf("성적을 올바르게 입력하세요(0~100)\n");
		}
		else
		{
			printf("학점은 %s 입니다.\n",CalculateGrade(score));
		}

	}
	return 0;
}

void PrintGradesTable(void)
{
    for(int i = 0; i < 2; i++)
    {
    	if(i==0)
    	{
    		printf("점수:\t");
    	}
    	else
    	{
    		printf("학점:\t");
    	}
        for(int j = 0; j < NUMBER_OF_GRADES; j++)
        {
        	printf("%s\t",GRADESTABLE[i][j]);
        }
		printf("\n");
    }

}

string CalculateGrade(int score)
{
	string grade=NULL;

	for(int i=0;i<NUMBER_OF_GRADES;i++)
	{
		if(score >= atoi(GRADESTABLE[0][i]))
		{grade=GRADESTABLE[1][i];
		break;
		}
	}
	return grade;
}