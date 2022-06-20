/*CH230-A a8p4
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include "stack.h" // include header file with stack-related functions //


int main(){
    struct stack data;
    unsigned int number, temp;
    data.count = -1;

    scanf("%d", &number);
    temp = number;
    while (number > 0){
        /* Pushing the remainder from the division 
            of the number by 2 into the stack */
        push(&data.array[0], number % 2, &data.count);
        number = number / 2;
    }

    printstack(&data.array[0], &data.count, temp);


}

