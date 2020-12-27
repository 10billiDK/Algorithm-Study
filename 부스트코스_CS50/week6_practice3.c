#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode {
    int data;
    struct stackNode* next;
} StackNode;

StackNode* createStackNode(int data){
    StackNode* node = (StackNode*)malloc(sizeof(StackNode));
    node ->data = data;
    node ->next = NULL;
    return node;
}

int isEmpty(StackNode* root){
    return !root;
}

void push(StackNode** root, int data){
    //StackNode *new_node = (StackNode*)malloc(sizeof(StackNode*));
    
    //new_node -> data = data;
    //new_node -> next = NULL; 함수로 지정해놓고 또 이짓을 햇네;
    StackNode *new_node = createStackNode(data);
    
    printf("%d pushed to stack\n",data);
    
    if (* root == NULL)
    {
        *root = new_node;
        return;
    }
    
    new_node ->next = *root;
    *root = new_node;
}

int pop(StackNode** root){
    
    StackNode* temp =*root;
    if(isEmpty(temp))
        return -9999;
    int popped;
    popped = temp->data;
    *root = temp->next;
    
    free(temp);
    
return popped;
}

int peek(StackNode** root) {
    if (isEmpty(*root))
        return -9999;
    return (*root)->data;
}

int main() {
    StackNode* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    push(&root, 40);

    printf("%d pop from stack\n", pop(&root));
    printf("%d pop from stack\n", pop(&root));

    push(&root, 50);
    printf("%d peeked from stack\n", peek(&root));
    printf("%d pop from stack\n", pop(&root));
    printf("%d pop from stack\n", pop(&root));
    printf("%d pop from stack\n", pop(&root));
    return 0;
}