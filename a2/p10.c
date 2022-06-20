/*CH230-A a2p10
    Muaaz Rajput    
    murajput@jacobs-university.de*/


#include <stdio.h>

int main() {
    int n = 0, c = 1, hours;

    while(n <= 0){
      scanf("%d", &n);// get a positive nonzero input //
    }

    /* calculate number of hours for each value of c
    upto n and print accordingly */
    while(c <= n){
        hours = c * 24; 

        if (c == 1){
            printf("%d day = %d hours\n", c, hours);
            c += 1;
        }
        else{
            printf("%d days = %d hours\n", c, hours);
            c += 1;
        }
    }
    return 0;
}