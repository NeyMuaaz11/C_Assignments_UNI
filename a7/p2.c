/*CH230-A a7p2
    Muaaz Rajput    
    murajput@jacobs-university.de*/


#include <stdio.h>
#include <stdlib.h>

// function prototypes //
struct list* addstart(struct list *head, char value);
struct list* remelem(struct list *head, char c);
void printback(struct list* head);
void printlist(struct list* head);
void freelist(struct list* head);


// list struct defined //
struct list{
    int data;
    struct list *next;
    struct list *prev;
};


int main(){
    char c;
    int number;
    struct list *head = NULL; // initializing head pointer to NULL //
    

    scanf("%d", &number);

    // while loop to repeatedly get input until input is 5 //   
    while (number != 5){
        
        switch(number){//switch statement with relevant cases and function calls//
            
            case 2:
            getchar();
            scanf("%c", &c);
            head = remelem(head, c);
            break;

            case 3:
            printlist(head);
            break;
            
            
            case 4:
            printback(head);
            break;

            case 1:
            getchar();
            scanf("%c", &c);
            head = addstart(head, c);
            break;

        }
        scanf("%d", &number);
    }

    freelist(head);

    return 0;


}


struct list* addstart(struct list *head, char value){
    struct list *newel;
    newel = (struct list*) malloc(sizeof(struct list));
    if (newel == NULL){
        printf("Could not allocate memory");
        return head;
    }
    if (head != NULL){
        head -> prev = newel;
    }
    newel -> data = value;
    newel -> next = head;
    newel -> prev = NULL;
    return newel;    
}

void printback(struct list* head){
    if (head == NULL){
        printf("\n");
    }else{
        while(head -> next != NULL){ // iterating to last element //
            head = head -> next;
        }
        // iterating backwards to first element and printing //
        while (head -> prev != NULL){ 
            printf("%c ", head -> data);
            head = head -> prev;
        }
        printf("%c ", head -> data); // printing the last element //
        printf("\n");
    }
}

struct list* remelem(struct list *head, char c){
    struct list *temp, *cursor;
    int rem = 0;
    cursor = head;



    while(cursor != NULL){
        if (cursor -> data == c){
            if (cursor -> next != NULL){
                cursor -> next -> prev = cursor -> prev;// swapping pointers //
            } 
            if (cursor -> prev != NULL){
                cursor -> prev -> next = cursor -> next;// swapping pointers //
            }else{
                head = cursor -> next; // iterating through the list //
            }
            temp = cursor;
            free(temp);
            rem = 1; // Used as Boolean to check if element was in the list //
        }
        cursor = cursor -> next;
    }

    if (rem == 0){
        printf("The element is not in the list!\n");
    }
    return head;
    
}

void printlist(struct list* head){
    struct list* nextelem = head;
    while(nextelem != NULL){
        printf("%c ", nextelem -> data);
        nextelem = nextelem -> next;
    } 
    printf("\n"); 
    
}

void freelist(struct list* head){
    struct list *nextelem;
    if (head != NULL){
        while (head -> next != NULL){
            nextelem = head -> next;
            free(head);
            head = nextelem;
        }
        free(head);
    }
}
