/*CH230-A a6p4
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

#define INTERMEDIATE

int main(){
    int dim;
    scanf("%d", &dim);
    // arrays with dimension dim declared after getting dim from input //
    int x[dim], y[dim], inter[dim], result = 0;
    
    // for loops to fill x and y vector arrays //
    for (int i = 0; i < dim; i++){
        scanf("%d", &x[i]);
    }
    for (int c = 0; c < dim; c++){
        scanf("%d", &y[c]);
    }

    // for loop to calculate result and save intermediate values //
    for (int j = 0; j < dim; j++){
        result = result + (x[j] * y[j]);
        inter[j] = x[j] * y[j];
    }

    // if condition with print statements accordingly //
    #ifdef INTERMEDIATE
        printf("The intermediate product values are:\n");
        for (int k = 0; k < dim; k++){
           printf("%d\n", inter[k]);
        }
    #endif

    printf("The scalar product is: %d", result);

    return 0;




}