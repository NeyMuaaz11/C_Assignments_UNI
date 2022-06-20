/*CH230-A a7p6
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// struct definition //
struct person{
    char name[30];
    int age;
};

// function prototypes //
int age(struct person one, struct person two);
int name(struct person one, struct person two);
void bubblesort(struct person *data, int number, int (*cmp)(struct person one,
                                                        struct person two));



int main(){
    int number, i;
    struct person *data;

    scanf("%d", &number);
    getchar();

    // dynamic allocation of array //
    data = (struct person*) malloc(sizeof(struct person) * number);

    // for loop to populate array //
    for (i = 0; i < number; i++){
        fgets(data[i].name, sizeof(data[i].name), stdin);
        data[i].name[strlen(data[i].name) - 1] = '\0';
        scanf("%d", &data[i].age);
        getchar();
    }
    i = 0;

    /* Sorting and printing the array, first according
        to name and then according to age*/
    bubblesort(data, number, name);
    for (i = 0; i < number; i++){
        printf("(%s, %d); ", data[i].name, data[i].age);
    }
    printf("\n");
    
    bubblesort(data, number, age);
    for (i = 0; i < number; i++){
        printf("(%s, %d); ", data[i].name, data[i].age);
    }
    printf("\n");

    
}

// sort function with pointer to compare function in third argument //
void bubblesort(struct person *data, int number, int (*cmp)(struct person one,
                                                        struct person two)){
    int swap, i;
    struct person temp;
    do{
        swap = 0;
        for (i = 0; i < number - 1; i++){
            if(cmp(data[i], data[i + 1]) > 0){
                temp = data[i + 1];
                data[i + 1] = data[i];
                data[i] = temp;
                swap++;
            }
        }

    }while(swap != 0);
}

// function to compare according to name //
int name(struct person one, struct person two){
    if (strcmp(one.name, two.name) > 0){
        return 1;
    }else if (strcmp(one.name, two.name) < 0){
        return -1;
    }else {
        return age(one, two);
    }
}

// function to compare according to age //
int age(struct person one, struct person two){
    if (one.age > two.age){
        return 1;
    }else if (one.age < two.age){
        return -1;
    }else {
        return strcmp(one.name, two.name);
    }
}