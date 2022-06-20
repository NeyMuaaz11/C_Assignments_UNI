/*CH230-A a5p4
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

void divby5(float *arr, int size);

int main(){
    float* arr;
    int n;

    scanf("%d", &n);

    arr = (float*) malloc(sizeof(float) * n); // dynamic memory allocation //

    // loop to store n values in array //
    for (int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }

    divby5(&arr[0], n); // function call //

    for (int i = 0; i < n; i++){
        printf("%f\n", *arr);
        arr += 1;
    }
    
    free(arr); // freeing the allocated memory //
    return 0;

}

void divby5(float *arr, int size){
    for(int i = 0; i < size; i++){
        *arr = *arr / (float)5; 
        arr += 1;
    }

}