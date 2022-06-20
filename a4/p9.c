/*CH230-A a4p9
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

// function to find product //
int prodminmax(int arr[], int n){
    int max = 0,  min = 1000000, prod;

    /* for loops with if statements to
    find max and min values*/ 
    for(int i = 0; i < n; i++){
        if (*(arr + i) > max){
            max = *(arr + i);
        }
        if (*(arr + i) < min){
            min = *(arr + i);
        }
    }
    prod = min * max;
    return prod;
}


int main(){
    int n, *arr, i;
    scanf("%d", &n); // getting input for size of array //
    arr = (int *) malloc(sizeof(int) * n); // dynamic memory allocation //
    
    for (i = 0; i < n; i++){
        scanf("%d", (arr + i));
    }
    printf("Product of maximum and minimum values is %d\n", prodminmax(arr, n));

    return 0;

    
}