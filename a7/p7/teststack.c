/*CH230-A a7p7
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include "stack.h" // include header file with stack-related functions //


int main(){
    struct stack data;
    int number;
    char command;
    data.count = -1;

    scanf("%c", &command);


    /* while loop with switch-case statements
        to act according to entered command*/
    while (command != 'q'){
        switch (command){
        
            case 's':
            scanf("%d", &number);
            push(&data.array[0], number, &data.count);
            break;

            case 'p':
            pop(&data.array[0], &data.count);
            break;

            case 'e':
            empty(&data.array[0], &data.count);
            break;

        }
        getchar();
        scanf("%c", &command);

    }
    printf("Quit\n");
}

