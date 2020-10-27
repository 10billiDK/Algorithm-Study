#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
    int data;
    struct ListNode *next;
}
ListNode;

ListNode* mergeTwoLists(ListNode*list1, ListNode*list2){
    ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    ListNode* pt = head;
    
    list1 = list1 -> next;
    list2 = list2 -> next;
    
    while(list1!= NULL && list2!= NULL)
        {
        if(list1->data <= list2-> data)
        {
            pt -> next =list1;
            list1 = list1 -> next;
        }
        else
        {
            pt-> next = list2;
            list2 = list2 -> next;
        }
        pt = pt-> next;
        }
    if(list1 !=NULL)
        pt ->next =list1;
    if(list2!=NULL)
        pt -> next =list2;
    return head;    
}

void append(ListNode*I,int data){
    ListNode* item =(ListNode*)malloc(sizeof(ListNode));
    item-> data = data;
    item -> next =NULL;
    
    ListNode* temp =(ListNode*)malloc(sizeof(ListNode));
    temp=I;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=item;
}

void printList(ListNode*I){
    while(I->next!=NULL)
    {
        printf("%d", I->next->data);
        I = I->next;
    }
    printf("\n");
    
}

int main(){
    ListNode*listA = (ListNode*)malloc(sizeof(ListNode));
    ListNode*listB = (ListNode*)malloc(sizeof(ListNode));
    
    append(listA,2);
    append(listA,6);
    append(listA,9);
    append(listA,10);
    printList(listA);
    
    append(listB,1);
    append(listB,5);
    append(listB,7);
    append(listB,8);
    append(listB,11);
    printList(listB);
    
    ListNode * result = mergeTwoLists(listA,listB);
    printList(result);
}