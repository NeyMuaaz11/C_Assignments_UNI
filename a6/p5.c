/*CH230-A a6p5
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int mask = 1;
    unsigned char c;

    scanf("%c", &c);
    printf("The decimal representation is: %d\n", (int)c);
    printf("The backwards binary representation is: ");
    /*while loop with if statements
        to compare each bit of mask
        with each bit of unsigned char
        c and print accordingly*/
    while (mask < (int)c){
        if (((int)c & mask) == 0)
           printf("0");
        else
            printf("1");
        mask =  mask << 1;
    }
    printf("\n");
    return 0;
}