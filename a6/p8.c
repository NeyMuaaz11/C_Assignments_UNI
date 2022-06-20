/*CH230-A a6p8
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

// function prototypes //
struct list* addstart(struct list *head, int value);
struct list* addend(struct list *head, int value);
struct list* remfirst(struct list *head);
void printlist(struct list* head);
void freelist(struct list* head);

// list struct defined //
struct list{
    int data;
    struct list *next;
};


int main(){
    char c;
    int number;
    struct list *head = NULL;
    

    scanf("%c", &c);

    // while loop to repeatedly get input until input is q //   
    while (c != 'q'){
        
        switch(c){//switch statement with relevant cases and function calls//
            
            case 'r':
            head = remfirst(head);
            break;

            case 'p':
            printlist(head);
            break;
            
            
            case 'a':
            scanf("%d", &number);
            head = addend(head, number);
            break;

            case 'b':
            scanf("%d", &number);
            head = addstart(head, number);
            break;

        }
        getchar();
        scanf("%c", &c);
    }

    freelist(head);

    return 0;


}


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
