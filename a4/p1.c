/*CH230-A a4p1
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <math.h>

int main(){
    float upper, lower, step;

    scanf("%f\n%f\n%f", &lower, &upper, &step); // read values from input //

    // for loop to calculate and print required values //
    for (float i = lower; i <= upper; i += step){
        printf("%f %f %f\n", i, (i * i) * M_PI, 2 * M_PI * i);
    }
    return 0;
}
   /* For some reason the last one or two
        decimals were not rounding properly
        according to grader when I saved area
        and perimeter in their own variable but 
        it works when the calculation is done
        directly in printf*/