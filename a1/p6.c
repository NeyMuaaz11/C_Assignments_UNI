/* CH230A a1p6.c
    Muaaz Rajput
    murajput@jacobs-university.de */

#include <stdio.h>

int main(){
    char c = 'F';
    int thirdasc = (int)c + 3; // calculates ascii value of F and adds three to it//
    
    printf("The third character after F is %c and its ascii value is %d", thirdasc,thirdasc);
}
/* by using the char format we converted the integer value of thirdasc,
    which was the ascii value for the third letter after F, into its corresponding character. */