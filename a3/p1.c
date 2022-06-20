/*CH230-A a3p1
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int main(){
    float x;
    int n, i;
    scanf("%f", &x); // read float from input and save in x //
    
    /* do while loop to ensure valid 
    integer value is input by the user */
    do{
        scanf("%d", &n);
        if (n <= 0)
            printf("Input is invalid, reenter value\n");

    }while(n <= 0);

    // for loop to print float n times //
    for(i = 0; i < n; i++)
        printf("%f\n", x);

    return 0;
}