/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    struct node* nextelem, *cursor;

	if(pq -> items == MAXQUEUE)
        return -1;
    
    nextelem = (struct node*) malloc(sizeof(struct node));
    if(nextelem == NULL)
        return -1;

    nextelem -> item = item;
    nextelem -> next = NULL;
    pq -> items += 1;
    pq -> rear =  nextelem;


    /* if-statement to check if 
    list is empty... if it is then  set
    first pointer to point to new element
    if not then make next pointer of previous
    last element to new element*/
    if(pq -> front == NULL)
        pq -> front = nextelem;
    else{
        cursor = pq -> front;
        while(cursor -> next != NULL)
            cursor = cursor -> next;
        cursor -> next = nextelem;
    }

    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    struct node* temp;
    // if list is empty... return -1
	if (pq -> items == 0)
        return -1;
    temp = pq -> front;
    *pitem = temp -> item;
    pq -> front = pq -> front -> next;
    free(temp);
    pq -> items -= 1;
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}