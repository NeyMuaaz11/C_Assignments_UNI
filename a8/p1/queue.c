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
    struct node* nextelem;

	if(pq -> items == MAXQUEUE)
        return -1;
    
    nextelem = (struct node*) malloc(sizeof(struct node));
    if(nextelem == NULL)
        return -1;

    nextelem -> item = item;
    nextelem -> next = NULL;
    pq -> items += 1;

    pq -> rear =  nextelem;

    if(pq -> front == NULL)
        pq -> front = nextelem;

    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// add missing stuff
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}