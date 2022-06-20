/*CH230-A a7p5
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

// function prototypes
int cmpa(const void* va, const void* vb);
int cmpd(const void* va, const void* vb);

int main(){
    int n, *data, i;
    char command;

    // function pointers initialize //
    int (*ascend)(const void* va, const void* vb);
    int (*descend)(const void* va, const void* vb);
    ascend = cmpa;
    descend = cmpd;

    scanf("%d", &n);

    // dynamic memory allocation for array with n integers //
    data = (int *) malloc(sizeof(int) * n);

    // for loop to populate array //
    for (i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }

    scanf("%c", &command);

    /* while loop with switch case statements
        containing qsort function calls with 
        function pointers according to entered command....
        a for loop is used to print the array after sorting*/
    while(command != 'e'){
        switch(command){
            case 'a':
            qsort(data, n, sizeof(int), ascend);
            for (i = 0; i < n; i++){
                printf("%d ", data[i]);
            } 
            printf("\n");
            break;

            case 'd':
            qsort(data, n, sizeof(int), descend);
            for (i = 0; i < n; i++){
                printf("%d ", data[i]);
            } 
            printf("\n");
            break;

        }
        scanf("%c", &command);
    }
}

// used by qsort to sort array in ascending order //
int cmpa(const void* va, const void* vb){
    const int* a, *b;
    a = (const int*) va;
    b = (const int*) vb;

    if (*a > *b)
        return 1;
    else if (*a < *b)
        return -1;
    else 
        return 0;
}

// used by qsort to sort in descending order //
int cmpd(const void* va, const void* vb){
    const int* a, *b;
    a = (const int*) va;
    b = (const int*) vb;
    
    if (*a > *b)
        return -1;
    else if (*a < *b)
        return 1;
    else 
        return 0;
}