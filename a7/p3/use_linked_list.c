/*CH230-A a7p1
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include "linked_list.h"
#include <stdio.h>


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