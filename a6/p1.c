/*CH230-A a5p7
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
// define macro with swapping //
#define SWAP(x, y, type) temp = 0;temp = x; x = y; y = temp;

int main(){
    int a, b;
    double c, d, temp;

    // get the inputs //
    scanf("%d\n%d", &a, &b);
    scanf("%lf\n%lf", &c, &d);

    // call macro //
    SWAP(a, b, int);
    SWAP(c, d, double);

    printf("After swapping:\n%d\n%d\n%.6lf\n%.6lf\n", a, b, c, d);
}