#include <stdio.h>
#include <stdlib.h>

typedef struct queue {
    int front;
    int rear;
    int size;
    int capacity;
    int* array;
} Queue;

Queue* createQueue(int capacity) {
    Queue* queue = (Queue *)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = 0;
    queue->size = 0;
    queue->rear = capacity-1;
    queue->array = (int *)malloc(sizeof(int)*queue->capacity);
    return queue;
}

int isFull(Queue* queue) {
    return (queue->size == queue->capacity);
}

int isEmpty(Queue* queue) {
    return (queue->size == 0);
}

void enqueue(Queue* queue, int item) {
    if (isFull(queue)) {
        return;
    }

    queue ->array[queue->front++] = item;
    printf("%d enqueued to queue\n", item);
    queue->size = queue->front;
}

int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        return -9999;
    }
    int item = 0;
    item = queue->array[0];
    return item;
}



int main() {
    Queue* queue = createQueue(1000);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    
    printf("%d dequeued from queue\n\n", dequeue(queue));
    return 0;
}