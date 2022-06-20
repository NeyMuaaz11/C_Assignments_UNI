#include <stdio.h>
#include "linked_list.h" // include the header file //
#include <stdlib.h>


struct list* addstart(struct list *head, int value){
    struct list *newel;
    newel = (struct list*) malloc(sizeof(struct list));
    if (newel == NULL){
        printf("Could not allocate memory");
        return head;
    }
    newel -> data = value;
    newel -> next = head;
    return newel;    
}


struct list* addend(struct list *head, int value){
    struct list *newel, *cursor;
    newel = (struct list *)malloc(sizeof(struct list));
    cursor = head;

    if (newel == NULL){
        printf("Could not allocate memory");
        return head;
    }
    newel -> data = value;
    newel -> next = NULL;
    
    if (head == NULL)
        return newel;

    while(cursor -> next != NULL)
        cursor  = cursor -> next;
    cursor -> next = newel;
    
    return head;

}


struct list* remfirst(struct list *head){
    struct list* next;
     // if statement to check if list is already empty //
    if (head == NULL){
        return head;
    }
    next = head -> next;
    free(head);
    return next;
}

void printlist(struct list* head){
    
    while(head != NULL){
        printf("%d ", head -> data);
        head = head -> next;
    }
    printf("\n");
}

void freelist(struct list* head){
    struct list *nextelem;
    if (head != NULL){
        do{
            nextelem = head -> next;
            free(head);
            head = nextelem;
        }while(head -> next != NULL);
    }
}
