#include <stdio.h>
#include <cs50.h>

int queue[10];

int add(void);
int pop(void);
int display(void);

int main(void)
{
    while (1) {
        int select = get_int("1.add, 2.pop, 3.display, 4.quit\n");

        switch (select) {
            case 1 : add(); break;
            case 2 : pop(); break;
            case 3 : display(); break;
            case 4 : return 0;
            default : printf("1 ~ 4 사이의 숫자를 입력해주세요.\n"); break;
        }
    }
}


int add(void)
{
    if (queue[9] != 0) {
        printf("Queue가 꽉 찼습니다.\n");
    }

    for (int i = 0; i < 10; i++) {
        if (queue[i] == 0) {
            int add_num = get_int("추가할 값을 입력해주세요.\n");
            queue[i] = add_num;
            break;
        }
    }

    return 0;
}

int pop(void)
{
    if (queue[0] == 0) {
        printf("Queue가 비었습니다.\n");
    }

    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            queue[i] = 0;
        } else {
            queue[i-1] = queue[i];
            queue[i] = 0;
        }
    }

    return 0;
}

int display(void)
{
    for (int i = 0; i < 10; i++) {
        printf("%d", queue[i]);
    }
    printf("\n");

    return 0;
}