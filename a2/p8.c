/*CH230-A a2p8
    Muaaz Rajput    
    murajput@jacobs-university.de*/


#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    /* The if statement checks whether the number
    is divisible by 2 and 7 and prints accordingly */
    if ((x % 2 == 0) && (x % 7 == 0))
        printf("The number is divisible by 2 and 7\n");
    else
        printf("The number is NOT divisible by 2 and 7\n");
    
    return 0;
}