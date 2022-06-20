/*CH230-A a6p2
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int main(){
    unsigned char c;
    int lsb;

    scanf("%c", &c);

    /* using the decimal value of one we create
        a mask with least significant bit on
        and do bitwise AND with the decimal value   
        of the unsigned char*/
    lsb = 1 & (int)c;

    printf("The decimal representation is: %d\n", (int)c);
    printf("The least signigicant bit is: %d\n", lsb);
    return 0;
}