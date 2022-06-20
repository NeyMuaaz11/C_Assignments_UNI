/*CH230-A a5p2
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

void divby5(float arr[], int size); // function prototype //

int main(){
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size;

    size = sizeof(arr) / sizeof(int); // calculating length of array //

    // for loop to print array before division //
    printf("Before:\n");
    for(int i = 0; i < size; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    divby5(arr, size); 

    // for loop to print array after division //
    printf("After:\n");
    for(int i = 0; i < size; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
}


void divby5(float arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] / (float)5;
    }

}