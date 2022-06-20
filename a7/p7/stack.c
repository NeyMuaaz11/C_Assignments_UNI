#include <stdio.h>
#include "stack.h" // include header file //



void push(int *data, int number, unsigned int *count){
    int i = 0;

    if(*count == -1){
        data[0] = number;
        printf("Pushing %d\n", number);
        *count += 1;
    }else if (*count == 11){
        printf("Pushing Stack Overflow\n");
    }else{
        for (i = 0; i <= *count; i++){
            data[*count - i + 1] = data[*count - i];
        }
        data[0] = number;
        printf("Pushing %d\n", number);
        *count += 1;
    }
}

void pop(int* data, unsigned int *count){
    int i = 0;

    if (isEmpty(count) == -1){
        printf("Popping Stack Underflow\n");
    }else{
        printf("Popping %d\n", data[0]);
        for (i = 0; i < *count; i++){
            data[i] = data[i + 1];
        }
        *count -= 1;
    }


}

void empty(int* data, unsigned int *count){
    int i = 0;
    if (*count == -1){
        printf("Emptying Stack Underflow\n");
    }else{
        printf("Emptying Stack ");
        while(*count != -1){
            printf("%d ", data[0]);
            for (i = 0; i < *count; i++){
                data[i] = data[i + 1];
            }
            *count -= 1;
            i = 0;
        }
        printf("\n");
    }

}

unsigned int isEmpty(unsigned int* count){
    if (*count == -1)
        return *count;
    else
        return 0;
}