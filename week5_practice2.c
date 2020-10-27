#include <stdio.h>

int main(void)
{
    int arr[6][5] ={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30}};
	int* p= &arr[6][5]; //배열에 주소값을 메김. 주소값을 포인터 p에 부여

	printf("%p\n",p); // 주소값을 16진수로 표현
	printf("%d\n",*p); // 주소값인가? or 배열의 값을 표현한 것인가?
	// printf("%d\n",p); d는 10진수 기반 형식. 주소값을 가져올 수 없음. 오류 발생. 가져오려면 d를 p로 바꾸던지, p를 *p로 바꾼다.

	printf("%d\n",*p);
	
	int n = sizeof(arr[0])/sizeof(int);
	int k = sizeof(arr)/n/sizeof(int);

    for(int i=0; i<k;i++)
    {
        for(int j=0; j<n;j++)
        {
            printf("%d\t",*(*(arr+i)+j)); //포인터 없이 출력할 때 쓰는 방식.
        }

    printf("\n");
    }
    return 0;
}