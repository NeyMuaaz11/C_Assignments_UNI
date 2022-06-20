/*CH230-A a6p3
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

// macros to find maximum and minimum of three values //
#define MAX(a, b, c) (a > b ? (a > c ? a : c) : (b > c ? b : c))
#define MIN(a,b,c) (a<b?(a<c?a:c):(b<c?b:c))

int main(){
    int a, b, c;
    float midrange;

    scanf("%d\n%d\n%d", &a, &b, &c);

    // calculating midrange using MAX and MIN macros //
    midrange = (MIN(a, b, c) + MAX(a, b, c)) / (float)2;

    printf("The mid-range is: %.6f\n", midrange);
    return 0;

}