//
// Created by chagit on 5/9/19.
//

#ifndef OS_EX4_2_OSQUEUE_H
#define OS_EX4_2_OSQUEUE_H

typedef struct os_node
{
    struct os_node* next;
    void* data;
}OSNode;

typedef struct os_queue
{
    OSNode *head, *tail;

}OSQueue;

OSQueue* osCreateQueue();

void osDestroyQueue(OSQueue* queue);

int osIsQueueEmpty(OSQueue* queue);

void osEnqueue(OSQueue* queue, void* data);

void* osDequeue(OSQueue* queue);

#endif //OS_EX4_2_OSQUEUE_H
