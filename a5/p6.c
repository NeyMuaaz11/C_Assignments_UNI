/*CH230-A a5p6
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int len, i, pos = -1;
    float *arr;

    scanf("%d", &len);

    arr = (float*) malloc(sizeof(float)*len); // dynamic memory allocation //

    /* for loop with nested if statements
        to check for first negative number*/
    for (i = 0; i < len; i++){
        scanf("%f", arr);
        if (*arr < 0){
            if (pos == -1){
                pos = i;
            }
        }
        arr += 1;
    }
    printf("Before the first negative value: %d elements", pos);

    return 0;


}