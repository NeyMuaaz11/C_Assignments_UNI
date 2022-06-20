/*  CH230-A a3p10
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

// function prototypes //
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main(){
    float a, b, p;
    scanf("%f\n%f", &a, &b);

    p = product(a, b); // byval function call //
    printf("Product using byval function: %f\n", p);

    productbyref(a, b, &p); // byref function call //
    printf("Product using byref function: %f\n", p);

    /* Compare values of a and b before the
        modify function called to show what 
        the function does....(it modifies the 
        values using pointers)*/
    printf("a is %f and b is %f before modify function called...\n", a, b);
    modifybyref(&a, &b);
    printf("a is %f and b is %f after modify function called...\n", a, b);
}

float product(float a, float b){
    return a * b;
}
void productbyref(float a, float b, float *p){
    *p = a * b;
}

void modifybyref(float *a, float *b){
    *a += 3;
    *b += 11;
}